/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75940
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
    var_10 |= (+(var_8));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */short) (unsigned char)184)), ((short)31826))))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_16 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((var_2) <= (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 5413900571117010715LL)))) % (((((/* implicit */_Bool) (short)-4096)) ? (9223372036854775778LL) : (var_0)))))));
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)138)))) > (((/* implicit */int) var_7))))) : ((~(((/* implicit */int) arr_12 [i_3 + 1] [i_1] [i_0 - 2]))))));
                                arr_17 [(unsigned char)20] [(unsigned char)20] [(unsigned char)20] [i_3] [i_2] &= ((((/* implicit */_Bool) min((arr_4 [i_3 - 1] [i_0 - 1] [i_0 + 1]), (arr_4 [i_3 - 3] [i_0 - 2] [i_0 - 2])))) || (((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0 - 2] [i_3 + 1] [17LL] [5ULL]))));
                                var_13 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_0] [i_1]);
                            }
                            /* vectorizable */
                            for (long long int i_5 = 3; i_5 < 19; i_5 += 4) 
                            {
                                var_14 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0 - 1] [(_Bool)1] [(_Bool)1] [i_0] [i_0 - 2])) < (((/* implicit */int) arr_12 [i_0 - 1] [18] [20LL]))));
                                var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_0] [i_5])) : (1497973547))))));
                                var_16 = ((/* implicit */long long int) ((unsigned long long int) (short)32767));
                            }
                            var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [i_3 - 1] [i_0 - 1] [17ULL])) ? (((/* implicit */int) arr_18 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_3])) : (((/* implicit */int) arr_19 [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        }
                    } 
                } 
                var_18 += ((/* implicit */short) ((((/* implicit */_Bool) (short)32512)) ? (2700398075105010381ULL) : (((/* implicit */unsigned long long int) 336778759))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((var_5) | (var_5)));
    var_20 = ((/* implicit */signed char) var_6);
}
