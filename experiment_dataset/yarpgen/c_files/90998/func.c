/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90998
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
    var_11 -= ((/* implicit */signed char) max((((max((var_7), (var_7))) - (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-71))))))), (((/* implicit */unsigned int) ((max((((/* implicit */int) var_1)), (var_3))) - (var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)32)) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (signed char)2))))) ? ((~(-235664409))) : (((/* implicit */int) (unsigned short)32672))))));
                            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) arr_7 [i_0]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_4 = 2; i_4 < 19; i_4 += 4) 
                {
                    arr_18 [i_0] [i_1] [i_0] = (((((_Bool)1) ? (((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) (signed char)47)))) : ((+(((/* implicit */int) (signed char)11)))))) << (((((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_1] [i_1])), (arr_4 [i_4 - 2] [i_4 - 2])))) - (109))));
                    var_13 += ((/* implicit */short) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) arr_8 [i_0] [i_0])))), (((/* implicit */int) (unsigned char)251)))))));
                }
            }
        } 
    } 
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) min((((/* implicit */short) (signed char)-51)), ((short)-17734))))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned char) min((var_1), ((signed char)-28)))))))))))));
}
