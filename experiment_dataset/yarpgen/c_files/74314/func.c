/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74314
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
    var_13 = ((/* implicit */unsigned long long int) var_12);
    var_14 = ((/* implicit */unsigned char) max((var_4), (((/* implicit */long long int) var_7))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_2 [(unsigned char)6] [i_0] = ((/* implicit */signed char) ((var_9) != (((/* implicit */unsigned long long int) ((1108760507U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21581))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            arr_5 [17ULL] [i_1] = ((/* implicit */unsigned int) ((signed char) var_7));
            arr_6 [i_1] [i_1] [i_0] = ((int) (unsigned short)21585);
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)43978);
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((unsigned char) 668143095U)))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_16 = var_0;
                        var_17 = ((/* implicit */short) (unsigned char)141);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            arr_16 [i_4] [i_4] = ((((/* implicit */int) var_12)) >> (((1546321398U) - (1546321373U))));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 2; i_5 < 20; i_5 += 3) 
            {
                var_18 = ((unsigned int) 17492828781520665892ULL);
                arr_20 [i_0] [i_4] [i_5] = ((/* implicit */_Bool) var_3);
            }
            var_19 += ((/* implicit */unsigned int) (_Bool)1);
            arr_21 [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) ^ (953915292188885723ULL)));
        }
        /* vectorizable */
        for (unsigned int i_6 = 4; i_6 < 23; i_6 += 3) 
        {
            var_20 = 465760105;
            /* LoopSeq 4 */
            for (unsigned int i_7 = 1; i_7 < 23; i_7 += 3) 
            {
                var_21 = var_10;
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_6))));
            }
            for (unsigned char i_8 = 1; i_8 < 22; i_8 += 3) 
            {
                arr_30 [i_6] [i_6] [i_0 - 1] [i_6] = ((/* implicit */_Bool) 7023545408595643918ULL);
                var_23 = ((/* implicit */unsigned int) ((unsigned long long int) var_7));
            }
            for (int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) 2748645865U);
                arr_33 [i_6] [i_0] [(unsigned char)10] [i_9] = ((/* implicit */unsigned char) 2560256544U);
            }
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                arr_36 [i_0] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((-2147483632) / (-2113691733)));
                var_25 -= ((/* implicit */long long int) 0U);
                arr_37 [i_0] [i_0] [i_6] [i_10] = ((/* implicit */unsigned short) ((signed char) 260046848));
                var_26 = ((/* implicit */unsigned int) (unsigned short)21581);
            }
            arr_38 [i_6] [i_0] [i_6] = ((/* implicit */int) (unsigned short)65523);
            var_27 += ((/* implicit */unsigned char) (short)3);
            arr_39 [i_0] [i_0] [i_6] = ((/* implicit */int) ((9223372036854775807LL) / (((/* implicit */long long int) var_2))));
        }
        arr_40 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) min((384U), (((/* implicit */unsigned int) var_8)))));
    }
}
