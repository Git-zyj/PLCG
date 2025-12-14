/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78521
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
    var_11 = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) (short)31350)))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_12 |= ((/* implicit */unsigned char) (~((~(((arr_1 [(unsigned short)3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1]))));
                        arr_11 [i_0 - 1] [(short)1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-22827)) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [6LL] [i_1])))))))), (3874765612928396063ULL)));
                        var_14 = ((/* implicit */long long int) ((_Bool) (_Bool)1));
                    }
                } 
            } 
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */long long int) arr_7 [i_0])) > (9223372036854775806LL))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_6)))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            arr_15 [i_4] = 12638870399206019566ULL;
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_8))))));
                        /* LoopSeq 1 */
                        for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((signed char) var_7));
                            var_18 = ((/* implicit */unsigned short) (+(9223372036854775806LL)));
                            var_19 -= ((/* implicit */short) (~(343368412U)));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (-((~(((/* implicit */int) arr_5 [(unsigned char)11] [i_4] [1] [i_8])))))))));
                            var_22 -= ((/* implicit */_Bool) 7237644956495010374ULL);
                            var_23 = ((/* implicit */short) (!(((arr_1 [i_0 + 1]) || (((/* implicit */_Bool) 11209099117214541235ULL))))));
                            var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_8 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 1]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            arr_27 [i_9] [i_4] [(unsigned char)0] [i_6] [i_9] |= ((/* implicit */short) (~(var_2)));
                            arr_28 [i_0] [i_4] [i_5] [i_6] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 2])) - (59395)))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            arr_32 [i_0 + 1] [i_4] [i_0 + 1] [i_6] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_22 [i_0] [i_4] [i_0] [i_6] [i_10])) ? (var_4) : (var_4)))));
                            arr_33 [i_0] [7LL] [i_4] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) (_Bool)0))));
                        }
                    }
                } 
            } 
            var_25 -= ((/* implicit */unsigned char) arr_6 [i_0] [i_4] [i_4] [i_4]);
        }
        var_26 = ((/* implicit */unsigned short) (+(((11209099117214541235ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (short)25574))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 - 1]))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [(unsigned char)13] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))) : (arr_17 [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            for (unsigned char i_12 = 3; i_12 < 12; i_12 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((unsigned int) ((((/* implicit */_Bool) 4839571967641405834ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_19 [i_0 - 1] [i_11] [i_12] [i_11]))))) - (185U)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) arr_42 [i_0 + 1])))));
                        var_30 -= ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) (!((_Bool)1)))))));
                        var_31 = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)120))));
                        arr_43 [i_0] [(unsigned char)1] [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_24 [i_0 + 1] [(signed char)0] [i_12] [i_12 - 2] [i_13 - 1] [i_13] [i_11]), (((/* implicit */unsigned short) (_Bool)1))))) ^ (((/* implicit */int) ((9223372036854775806LL) <= (max((var_6), (((/* implicit */long long int) (unsigned char)120)))))))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) : (arr_36 [i_0] [i_0 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (9223372036854775806LL)))) ? (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_23 [i_0 - 2] [i_11] [(_Bool)1] [i_0 - 2] [i_12 - 3] [i_13]))))))) : (((unsigned int) ((var_5) ? (((/* implicit */int) (unsigned short)17393)) : (arr_21 [i_0 - 1] [i_11] [i_11] [i_13]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_14 = 1; i_14 < 13; i_14 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (3066237890551008819ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_0 - 1] [i_0] [i_0] [i_0])))));
                        var_34 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_11])) ? (arr_17 [i_11]) : (arr_17 [i_11])));
                    }
                }
            } 
        } 
    }
    for (signed char i_15 = 2; i_15 < 13; i_15 += 2) /* same iter space */
    {
        arr_50 [i_15] [i_15] = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) (_Bool)1))))) ? (arr_36 [i_15 + 1] [(short)12]) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))) / (arr_3 [7ULL] [i_15 + 1]))))) / (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)5)))))));
        var_35 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_34 [i_15 - 1] [i_15] [i_15])) | (((/* implicit */int) (!(((/* implicit */_Bool) 11209099117214541235ULL)))))));
        var_36 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22423)) ? (11209099117214541235ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_15])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_34 [(_Bool)1] [i_15 + 1] [i_15 - 1]))))) ? (arr_22 [i_15 + 1] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_15] [i_15])))))))))));
    }
    var_37 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4839571967641405834ULL)) ? (var_4) : (var_2)))) : ((~(var_7)))))));
}
