/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60620
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
    var_17 = ((/* implicit */short) max((((/* implicit */unsigned int) max(((unsigned short)5), (((/* implicit */unsigned short) (_Bool)1))))), (((unsigned int) var_16))));
    var_18 = ((/* implicit */unsigned short) ((long long int) max((min((((/* implicit */long long int) var_15)), (var_7))), (((/* implicit */long long int) ((_Bool) (unsigned short)65535))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((unsigned short) var_15)))));
                            var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((short) min((((/* implicit */long long int) arr_6 [i_0] [i_0])), (var_16))))), (min((((/* implicit */long long int) min(((_Bool)1), ((_Bool)0)))), (arr_7 [i_0] [i_2] [i_3])))));
                            arr_12 [i_3] [i_2] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) max((min((-5836061088811819620LL), (9223372036854775807LL))), (min((-2623367562540868504LL), (((/* implicit */long long int) arr_5 [i_3]))))));
                        }
                    } 
                } 
                arr_13 [i_0] [0] |= ((/* implicit */unsigned short) max((max((var_1), (((/* implicit */int) var_9)))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [(_Bool)1] [i_1 + 2])), ((unsigned char)214))))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((long long int) 9223372036854775786LL)), (min((2328785471359809366LL), (((/* implicit */long long int) var_5)))))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 3; i_4 < 12; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((((short) -9223372036854775804LL)), (((/* implicit */short) ((signed char) var_11)))));
                            var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_5]))), (((unsigned long long int) 6333427174878691688LL))));
                            var_23 |= ((long long int) ((signed char) max((9223372036854775786LL), (-5836061088811819620LL))));
                            var_24 = ((long long int) min((((/* implicit */long long int) (_Bool)1)), (8015476207177681696LL)));
                            var_25 ^= min((((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */short) arr_1 [i_5])), (arr_2 [i_5]))))), (((unsigned int) min(((_Bool)1), ((_Bool)1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) max((min((max((((/* implicit */long long int) var_10)), (var_7))), (var_11))), (min((min((9223372036854775807LL), (((/* implicit */long long int) var_8)))), (min((var_3), (((/* implicit */long long int) (unsigned short)20065))))))));
    var_27 = ((/* implicit */long long int) var_10);
}
