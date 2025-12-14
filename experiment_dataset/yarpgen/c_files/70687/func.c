/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70687
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 += ((/* implicit */unsigned char) (((((-(var_3))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32640))))) != (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_17 ^= ((/* implicit */unsigned char) var_14);
                        arr_11 [i_0] [i_3] [i_2] [i_3] = ((unsigned short) ((((/* implicit */int) min((var_9), (var_2)))) << (((((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3]))))) - (1036664408U)))));
                        arr_12 [i_2] [i_3] = ((/* implicit */short) (signed char)1);
                        var_18 += ((/* implicit */long long int) arr_2 [i_0] [i_0] [i_3]);
                    }
                } 
            } 
            arr_13 [(unsigned short)12] = ((/* implicit */short) (((((-(((/* implicit */int) (unsigned short)47194)))) + (2147483647))) >> (((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (-1030480291)))));
            var_19 ^= ((/* implicit */unsigned short) ((-4381455900624504605LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
            var_20 ^= (signed char)-1;
        }
        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_5 = 1; i_5 < 16; i_5 += 2) /* same iter space */
            {
                var_21 = ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)47488)));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 1; i_6 < 16; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        arr_23 [i_0] [i_5] [i_6] = ((/* implicit */long long int) var_14);
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_5 - 1] [i_4] [i_4])) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_6))))) ? (((arr_21 [i_4] [i_4 + 2] [i_4] [i_6 + 4] [i_6]) << (((var_10) - (711091274))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_21 [i_0] [i_4 - 1] [i_7] [i_6 + 4] [i_6]))))))));
                    }
                    var_23 *= ((/* implicit */unsigned int) (signed char)10);
                }
            }
            for (unsigned short i_8 = 1; i_8 < 16; i_8 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 1; i_9 < 18; i_9 += 1) 
                {
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        {
                            arr_33 [i_10] [i_9] [i_8] [i_4] [i_4] [i_0] = ((/* implicit */short) var_5);
                            arr_34 [i_0] [i_4] [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((max((((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_9))))), ((-(4381455900624504605LL))))) + (((/* implicit */long long int) ((arr_1 [i_0]) << (((4381455900624504604LL) - (4381455900624504588LL))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)246))) / (4381455900624504604LL))))) | (((/* implicit */int) var_11)))))));
            }
            for (unsigned short i_11 = 4; i_11 < 17; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        {
                            arr_44 [(signed char)8] [(signed char)8] [(_Bool)1] [(signed char)14] [i_13] [(_Bool)1] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-86)), (-9223372036854775806LL)))) ? (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (signed char)(-127 - 1))))))) : (((/* implicit */int) (signed char)127))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)0))))), (603312898564201973LL)))));
                            var_26 += ((/* implicit */unsigned int) (unsigned char)19);
                        }
                    } 
                } 
                arr_45 [i_11] = ((/* implicit */unsigned short) arr_32 [i_0] [i_0] [i_0]);
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_5))));
                var_28 = ((/* implicit */long long int) (-(var_4)));
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) min((((/* implicit */long long int) arr_36 [i_0] [i_0] [i_0])), (4381455900624504604LL))))));
            }
            arr_46 [i_0] [(_Bool)1] [i_4] = ((/* implicit */_Bool) arr_10 [i_0] [i_4] [i_0] [i_4] [i_4]);
            /* LoopNest 2 */
            for (unsigned short i_14 = 2; i_14 < 16; i_14 += 3) 
            {
                for (unsigned char i_15 = 1; i_15 < 19; i_15 += 1) 
                {
                    {
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) var_8))));
                        arr_52 [i_15] [i_15] [i_14 + 4] = ((/* implicit */unsigned short) min((-4381455900624504605LL), (((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_0] [i_4])) >= (((/* implicit */int) arr_16 [i_4] [i_4] [i_15])))))));
                    }
                } 
            } 
        }
        var_31 *= ((/* implicit */unsigned char) (-(min(((+(((/* implicit */int) (signed char)64)))), (((/* implicit */int) (short)-25439))))));
    }
    var_32 = min((((/* implicit */unsigned int) var_5)), (var_12));
}
