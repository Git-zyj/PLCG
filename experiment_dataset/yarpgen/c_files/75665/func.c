/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75665
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
    var_14 += ((/* implicit */signed char) (~(((((/* implicit */int) var_5)) & (((/* implicit */int) var_13))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) (-(((((/* implicit */_Bool) max((var_3), ((unsigned short)59472)))) ? (min((((/* implicit */unsigned int) (unsigned char)24)), (2013265920U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 3] [i_1] [i_0 + 3])))))));
                var_16 += ((/* implicit */unsigned char) (unsigned short)17567);
                var_17 = ((/* implicit */unsigned char) var_0);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [4ULL] [i_0])))))) : (min((((((/* implicit */_Bool) arr_3 [i_3] [i_1])) ? (671088681) : (((/* implicit */int) arr_1 [i_0 + 2] [i_1])))), (((((/* implicit */_Bool) 16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)242)) == (((/* implicit */int) (unsigned char)237))))) != (((/* implicit */int) (unsigned short)57975)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_0);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4604467046237730595LL)) ? (((((/* implicit */int) (signed char)117)) / (((/* implicit */int) (unsigned char)136)))) : (((/* implicit */int) ((max((var_0), (var_4))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))));
    var_22 = ((/* implicit */int) (~(var_0)));
}
