/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57419
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_11 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_5 [i_0])))) ? ((~(arr_3 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_12 -= ((/* implicit */short) (~(((/* implicit */int) var_5))));
                        var_13 = ((/* implicit */short) (-(((/* implicit */int) max((arr_8 [i_0] [i_3] [i_2] [i_3]), (arr_8 [i_0] [i_1] [i_2] [i_3]))))));
                        var_14 -= ((((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned short)21362)))) && (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_1])))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (-6687270575394941625LL)))));
                    }
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_15 = ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((arr_5 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_4])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_4])))))));
                        arr_15 [i_4] = ((/* implicit */short) ((((((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (short)-24181)))) ? (((/* implicit */int) (unsigned short)8380)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)20)))))) > (((/* implicit */int) (_Bool)1))));
                        var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)114))) + (4104391058307420080ULL))))) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)28413)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((arr_0 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (14342353015402131536ULL)))))));
                        var_17 -= ((/* implicit */_Bool) max(((+(64201803553531934ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) - (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (arr_3 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42955))))))));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_3))))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_4])))) << (((((((/* implicit */_Bool) var_1)) ? (2724532242U) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)250))))))) - (2724532221U))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        arr_18 [i_5] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0]);
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((arr_17 [i_5] [i_1] [i_5] [i_5] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_10))))) >= (((/* implicit */int) ((_Bool) var_10)))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_5]))));
                            arr_21 [i_0] [i_5] [i_2] [i_5] [i_5] [i_6] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2] [i_2] [i_5] [i_6])))));
                        }
                    }
                }
            } 
        } 
    } 
    var_21 = (unsigned short)45524;
}
