.PHONY: clean All

All:
	@echo "----------Building project:[ bignums - Debug ]----------"
	@cd "bignums" && "$(MAKE)" -f  "bignums.mk"
clean:
	@echo "----------Cleaning project:[ bignums - Debug ]----------"
	@cd "bignums" && "$(MAKE)" -f  "bignums.mk" clean
