add_rules("mode.debug", "mode.release")

add_requires("rang 2022.07.01", {
	alias = "rang"
})

target("BornToBeLowLevel")
	add_files("src/**.cpp")
	add_includedirs("include")
	add_packages("rang")
	set_languages("c++20")