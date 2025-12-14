/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97796
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
    var_18 += ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58))) : (12272541104495973756ULL))) << ((((~(((/* implicit */int) var_2)))) - (51))))), (((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_7)) + (2147483647))) >> (((((/* implicit */int) (signed char)-48)) + (77))))) >> (((var_17) - (17079721436019102275ULL))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            var_19 = ((867279580539607801ULL) << (((min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [8ULL] [i_1] [8ULL]))))))) - (6271302193240130570ULL))));
            var_20 ^= ((/* implicit */unsigned long long int) (signed char)1);
            var_21 &= arr_5 [i_0] [i_1] [i_1];
        }
        for (signed char i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((arr_4 [i_2] [(signed char)1] [1ULL]) + (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (signed char)-78)))), (((/* implicit */int) arr_0 [i_0]))))))))));
            /* LoopNest 2 */
            for (signed char i_3 = 3; i_3 < 15; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_23 ^= ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((unsigned long long int) 10009331770765198166ULL)), (((/* implicit */unsigned long long int) (signed char)-125))))))))));
                    }
                } 
            } 
            var_25 = arr_3 [i_2];
            arr_12 [i_0] [9ULL] = ((/* implicit */short) ((unsigned long long int) 2756563369183374641ULL));
            var_26 = ((/* implicit */short) arr_4 [i_0] [i_0] [(signed char)0]);
        }
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                for (signed char i_7 = 1; i_7 < 13; i_7 += 1) 
                {
                    for (signed char i_8 = 1; i_8 < 14; i_8 += 2) 
                    {
                        {
                            arr_21 [i_6] [i_7 + 3] [(signed char)9] [i_5] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_5] [2ULL] [i_5]))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_8] [i_5])) ? (8830656596218675826ULL) : (arr_13 [i_8] [i_0])))))) | (((unsigned long long int) (short)1169))));
                            var_28 = ((/* implicit */short) arr_3 [1ULL]);
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (signed char)12))));
                        }
                    } 
                } 
            } 
            var_30 = arr_14 [i_5];
            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_5] [i_5])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33))) * (arr_10 [i_5] [i_5] [(short)12] [i_5])))))) || (((/* implicit */_Bool) arr_19 [i_0] [(signed char)9] [i_5] [i_5] [(signed char)15] [(signed char)0]))));
        }
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            var_32 = 18053420204880662290ULL;
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                var_33 = ((/* implicit */signed char) 6174202969213577832ULL);
                arr_26 [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) < (arr_10 [i_0] [(signed char)3] [i_10] [i_0]))) ? ((~(arr_10 [i_10] [i_10] [i_10] [i_10]))) : (((arr_10 [i_0] [i_9] [i_10] [i_9]) / (arr_10 [(signed char)1] [i_9] [i_10] [i_9])))));
                var_34 = ((/* implicit */short) ((unsigned long long int) (short)3578));
            }
            for (signed char i_11 = 1; i_11 < 14; i_11 += 2) 
            {
                arr_30 [3ULL] [i_11] |= ((/* implicit */signed char) 15938317681161265685ULL);
                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [(signed char)14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_11] [12ULL]))) : ((+(max((((/* implicit */unsigned long long int) (signed char)36)), (arr_7 [i_0])))))));
                arr_31 [(signed char)6] = ((/* implicit */unsigned long long int) arr_25 [i_0] [i_9] [(signed char)12]);
            }
        }
        arr_32 [(signed char)1] [13ULL] = ((/* implicit */signed char) (short)-7797);
        var_36 = ((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_0] [(signed char)14] [(signed char)14]);
    }
    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
    {
        arr_35 [(signed char)15] [2ULL] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)12)) - (((/* implicit */int) (short)-21592))));
        var_37 *= ((/* implicit */signed char) ((arr_34 [i_12] [i_12]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13021613252414503878ULL)) ? (((/* implicit */int) (short)8637)) : (((/* implicit */int) arr_16 [i_12] [10ULL] [10ULL] [i_12])))))));
    }
    var_38 &= ((/* implicit */signed char) (short)509);
    var_39 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-7)))))));
}
