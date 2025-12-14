/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55137
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_12 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((max((3020572700569622011ULL), (15426171373139929603ULL))) / (min((((((/* implicit */_Bool) (unsigned char)251)) ? (3020572700569622012ULL) : (1ULL))), (var_9))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) + (var_0)))) ? (((unsigned long long int) (_Bool)1)) : (3020572700569622012ULL)));
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (unsigned char)121)))))));
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)117)) : (((((/* implicit */_Bool) -5208667052038336511LL)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) (unsigned char)94)))))))));
                                var_17 *= ((/* implicit */int) ((max((((9219086269925515948ULL) % (((/* implicit */unsigned long long int) -1782003053636805797LL)))), (((13ULL) + (15426171373139929592ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20367))) < (var_4))) || (((/* implicit */_Bool) (-(var_8))))))))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((15426171373139929603ULL) & (((/* implicit */unsigned long long int) 1125899906711552LL))))));
                            }
                        } 
                    } 
                    var_19 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((var_6) + (9223372036854775807LL))) << (((var_7) - (4186900223666539300ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775807LL) > (var_6))))) : (var_7))), (((((/* implicit */_Bool) (unsigned short)31959)) ? (((/* implicit */unsigned long long int) 0LL)) : (7985032785094666664ULL)))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) (short)-20387))))))));
                }
            } 
        } 
    } 
}
