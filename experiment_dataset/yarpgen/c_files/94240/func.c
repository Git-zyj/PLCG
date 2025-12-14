/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94240
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
    var_16 = ((/* implicit */_Bool) ((unsigned char) 230593931));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) arr_1 [i_0 + 1] [i_0 + 1])));
        var_17 = ((/* implicit */int) ((unsigned long long int) ((_Bool) (_Bool)1)));
        arr_5 [(unsigned char)11] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((_Bool) arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 14; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((unsigned short) -230593932));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_19 ^= ((/* implicit */int) ((signed char) ((long long int) arr_11 [7] [(unsigned char)13] [7] [(unsigned char)13])));
                        var_20 = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) arr_1 [i_0] [9LL])));
                        var_21 ^= ((/* implicit */unsigned long long int) ((signed char) ((signed char) arr_2 [i_1 + 1])));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_16 [i_0] [i_1 + 3] [i_0] = ((/* implicit */int) ((unsigned short) ((short) -230593932)));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 2; i_5 < 11; i_5 += 4) /* same iter space */
                        {
                            arr_20 [i_0] = ((signed char) ((int) var_2));
                            var_22 &= ((/* implicit */int) ((signed char) ((unsigned long long int) arr_13 [i_0] [i_1] [i_0] [i_4])));
                            var_23 ^= ((/* implicit */signed char) ((unsigned char) ((int) arr_6 [i_2])));
                            var_24 += ((long long int) ((unsigned int) -787782886));
                        }
                        for (signed char i_6 = 2; i_6 < 11; i_6 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned int) ((short) ((short) 5775297303152910492ULL)));
                            arr_23 [(unsigned char)7] [i_1] [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) ((unsigned short) ((int) arr_8 [i_0] [i_0])));
                            var_26 ^= ((/* implicit */unsigned char) ((short) ((short) var_4)));
                        }
                        arr_24 [i_0] = ((/* implicit */long long int) ((short) ((unsigned short) var_4)));
                    }
                    var_27 = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) (unsigned char)44)));
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 4; i_7 < 13; i_7 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            arr_33 [i_0] [7LL] [8U] [i_2] [6LL] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])));
                            arr_34 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned short) ((_Bool) var_12)));
                        }
                        var_28 = ((/* implicit */unsigned char) ((unsigned short) ((int) var_8)));
                        var_29 = ((/* implicit */unsigned char) ((long long int) ((unsigned short) 230593932)));
                    }
                    for (unsigned short i_9 = 4; i_9 < 13; i_9 += 3) /* same iter space */
                    {
                        arr_38 [i_0] [i_9] [i_0] [0] [i_0] = ((/* implicit */long long int) ((int) ((int) (unsigned char)212)));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((unsigned short) ((_Bool) arr_32 [i_0] [(signed char)4] [i_2] [i_10]))))));
                            var_31 ^= ((/* implicit */unsigned short) ((short) ((unsigned int) 10385949058971570235ULL)));
                            var_32 += ((/* implicit */_Bool) ((long long int) 230593930));
                            arr_41 [i_2] [i_1] [i_1] [i_9] [i_10] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((unsigned char) (signed char)-89)));
                            var_33 = ((/* implicit */unsigned short) ((_Bool) 1878901889));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_11 = 1; i_11 < 11; i_11 += 3) 
                        {
                            arr_44 [i_11] [i_0] [i_2 - 2] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) ((_Bool) arr_35 [(unsigned short)11] [i_0] [i_0] [i_0])));
                            var_34 *= ((/* implicit */short) ((_Bool) ((unsigned long long int) 12671446770556641123ULL)));
                        }
                    }
                }
            } 
        } 
    }
}
