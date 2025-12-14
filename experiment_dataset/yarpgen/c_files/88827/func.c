/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88827
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
    var_14 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((signed char) min((var_4), (((/* implicit */int) (signed char)123)))))) ? (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (arr_2 [i_0]))) % ((-(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_2)));
        var_15 ^= ((/* implicit */unsigned long long int) (~((((_Bool)1) ? (117945484655642846LL) : (((/* implicit */long long int) -1367974798))))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            arr_12 [i_2] = (-(((/* implicit */int) ((unsigned char) 9223372036854775807LL))));
            var_16 = ((/* implicit */short) ((signed char) 152213004));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                for (long long int i_4 = 2; i_4 < 16; i_4 += 3) 
                {
                    {
                        arr_17 [i_4] [i_2] [i_2] [i_2] [i_2] [i_1] = ((unsigned char) arr_4 [i_3 + 1]);
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (_Bool)1))));
                            arr_20 [i_1] [11ULL] [i_2] [i_4] [(unsigned char)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) var_9)))) : (((int) (unsigned short)7))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            var_19 *= ((/* implicit */_Bool) ((unsigned int) arr_21 [i_6] [(signed char)8] [i_1] [i_2] [i_1]));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (signed char)68)))))) : (34359738367LL)));
                            var_21 *= ((/* implicit */short) ((int) arr_16 [i_6] [i_3 - 1] [i_3 - 1] [i_4 + 2]));
                        }
                    }
                } 
            } 
            arr_23 [i_2] [i_2] = ((/* implicit */int) var_10);
        }
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (short i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                for (short i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    for (unsigned short i_10 = 2; i_10 < 17; i_10 += 1) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 34359738353LL)) ? (((/* implicit */int) (_Bool)1)) : (378541340)))));
                            arr_34 [i_1] [i_10] [i_8] [i_9] [i_10] = ((/* implicit */short) 17085911279126023439ULL);
                        }
                    } 
                } 
            } 
            var_23 = (!(((/* implicit */_Bool) -34359738373LL)));
        }
        /* vectorizable */
        for (long long int i_11 = 1; i_11 < 19; i_11 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) arr_14 [(signed char)5] [i_1] [i_1] [i_11]);
            arr_39 [i_11] = (~(((((/* implicit */_Bool) var_2)) ? (arr_37 [i_1] [i_1] [i_1]) : (((/* implicit */int) (_Bool)1)))));
            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (+(-230941786))))));
        }
        /* LoopNest 3 */
        for (signed char i_12 = 1; i_12 < 19; i_12 += 4) 
        {
            for (long long int i_13 = 3; i_13 < 18; i_13 += 3) 
            {
                for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) max((arr_8 [(signed char)13] [i_13]), (((/* implicit */unsigned int) (-(min((-378541372), (((/* implicit */int) (unsigned short)15146)))))))));
                        /* LoopSeq 1 */
                        for (long long int i_15 = 1; i_15 < 19; i_15 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_10))));
                            var_28 *= ((/* implicit */signed char) max((1278535548U), (((/* implicit */unsigned int) min((230941772), (arr_44 [i_13 - 1] [i_15 - 1] [i_12 - 1]))))));
                            var_29 = ((/* implicit */_Bool) 18446744073709551597ULL);
                        }
                    }
                } 
            } 
        } 
    }
}
