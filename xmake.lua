set_project("lys-types")
set_version("0.0.0")
add_rules("mode.debug", "mode.release")

add_requires("gtest", {system = false, configs = {main = true, gmock = false, shared = false}})

set_languages("c++20")
set_warnings("all", "error")

target("lys-types")
    set_kind("headeronly")
    add_includedirs("include", {public = true})
    add_headerfiles("include/**.hpp", {public = true})

for _, testfile in ipairs(os.files("tests/**.cpp")) do 
    local name = path.basename(testfile)
    target(name)
        set_kind("binary")
        add_files(testfile)
        add_deps("lys-types")
        add_packages("gtest", {main = true, gmok = false})
        set_group("test")
        add_tests("types")
        set_default(false)
end