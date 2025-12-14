/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96329
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
    var_14 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) (unsigned char)63)))) : (((var_3) ? (((/* implicit */int) (unsigned short)26544)) : (((/* implicit */int) var_6))))))), (var_2)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(0ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9221382762724408651ULL)))) ? (((/* implicit */int) (unsigned char)61)) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [(_Bool)1])) : (((/* implicit */int) var_6))))));
                                var_16 = ((/* implicit */unsigned short) var_1);
                                arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) ((((max((((/* implicit */unsigned long long int) arr_3 [i_1])), (var_2))) >> ((((-(((/* implicit */int) var_7)))) + (47))))) == (((/* implicit */unsigned long long int) (~(((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                                arr_13 [i_1] [i_1 + 3] [i_2 - 1] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((var_7), ((_Bool)1)))), (((unsigned short) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) - ((-(arr_4 [(short)9] [(short)9]))))) : (((/* implicit */unsigned long long int) (~(arr_7 [i_4] [i_1] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)4)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (~(var_2)))))))));
    }
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_0 [i_5])))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))), (((/* implicit */int) arr_3 [i_5])))))));
        var_21 = ((/* implicit */_Bool) arr_0 [i_5]);
    }
}
