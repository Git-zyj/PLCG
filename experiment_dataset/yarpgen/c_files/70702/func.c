/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70702
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
    var_20 = ((/* implicit */signed char) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = var_14;
                                arr_12 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_19)))) ? (var_15) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) ((_Bool) var_3)))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                            {
                                arr_15 [i_0] [3U] [i_1] [i_1 + 1] [i_2] [i_3] [i_5] = ((/* implicit */signed char) var_7);
                                arr_16 [i_0] [i_5] [i_2] [i_2] [14ULL] [(unsigned char)8] [i_5] = ((/* implicit */unsigned short) max((var_0), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_8 [i_0] [(unsigned short)1] [i_0] [i_0])))) ? (((/* implicit */int) (short)-20638)) : ((~(((/* implicit */int) var_10)))))))));
                            }
                            arr_17 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) == (var_13))));
                            arr_18 [(unsigned short)0] [14ULL] [(unsigned char)14] [2] = ((/* implicit */_Bool) (~(arr_8 [0LL] [i_2] [i_0] [i_0])));
                            arr_19 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */unsigned long long int) arr_3 [i_1 + 2] [i_1 + 2])), (1586612843821767437ULL))));
                        }
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)192))));
                arr_21 [(unsigned char)10] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [0U] [0U])) : (((/* implicit */int) arr_4 [(unsigned short)2] [(unsigned short)2]))))), ((-(arr_6 [i_1 + 2] [i_1 + 1] [i_1 + 2])))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((max(((~(((/* implicit */int) (signed char)15)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))))) - (((/* implicit */int) var_14))));
}
