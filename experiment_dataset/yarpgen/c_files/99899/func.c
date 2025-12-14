/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99899
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
    var_12 &= ((/* implicit */signed char) var_4);
    var_13 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_3))))) ? (var_10) : (((/* implicit */int) max((arr_2 [i_0] [i_0] [i_1]), (((/* implicit */short) var_0)))))))));
                arr_5 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((1), (((((/* implicit */_Bool) 144115188075724800LL)) ? (((/* implicit */int) (short)-22435)) : (((/* implicit */int) (short)13975))))))), (arr_1 [i_0] [i_1])));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_10 [i_3] [i_3 + 1] [i_3 + 1] [i_3])))), ((-(((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (var_7))))))));
                            var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17592186044416LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_0)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)27121))) : (1855769492132116497LL)))))) ? (((/* implicit */int) arr_12 [i_3] [4U] [i_2] [i_1] [4U] [i_0])) : (((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2])))))))));
                            var_16 = ((((long long int) (~(arr_0 [i_0])))) == (max((((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_8 [(short)10] [i_1] [i_2] [i_2]))), (max((((/* implicit */long long int) var_0)), (var_11))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) max((var_1), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)0))))) != (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-7))) : (-2251181116120692355LL))))))));
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (short)-32750)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? ((~(var_1))) : (((/* implicit */unsigned int) var_10))))));
}
