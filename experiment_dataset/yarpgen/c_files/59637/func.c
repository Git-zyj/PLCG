/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59637
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
    var_10 = ((/* implicit */int) max((((((/* implicit */int) var_1)) > (((/* implicit */int) var_1)))), (var_4)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                var_12 = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_1 [i_0]))) >= (((/* implicit */int) arr_1 [i_0]))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 - 2]))))), (((((/* implicit */int) min((((/* implicit */signed char) var_6)), ((signed char)-86)))) - (((/* implicit */int) max(((unsigned char)129), (arr_4 [i_1] [i_0]))))))));
            }
        } 
    } 
    var_13 = ((unsigned char) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max(((unsigned char)162), (((/* implicit */unsigned char) var_4)))))));
    var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)93)) | (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) var_3)))) : (((((/* implicit */int) var_5)) | (((/* implicit */int) var_7)))))), (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned char) var_7)), (var_9)))))));
    /* LoopSeq 3 */
    for (signed char i_2 = 1; i_2 < 13; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                {
                    arr_14 [i_2] [i_3] [i_4] = ((/* implicit */int) arr_3 [i_2] [i_4] [i_2]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 11; i_5 += 3) /* same iter space */
                    {
                        var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_5])) ? (arr_6 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)27)))))) && (((/* implicit */_Bool) (unsigned char)4))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_3] [i_4] [i_5 - 1])) ? (((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_13 [i_2 - 1] [i_3] [i_3] [i_5 + 2]))));
                        var_17 = ((/* implicit */int) (+((-(arr_7 [i_2])))));
                        arr_17 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_5 + 1] = ((/* implicit */short) arr_15 [(signed char)0] [i_5] [i_5] [i_5 - 1]);
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */_Bool) (-(arr_6 [i_6 + 1] [i_5 + 2])));
                            arr_20 [i_2 - 1] [i_3] [i_6] [i_5] [i_5] [(unsigned char)4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */int) (unsigned char)118)) : (((/* implicit */int) arr_1 [i_6]))))) / (((((/* implicit */_Bool) arr_3 [i_2] [i_6] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_3])))));
                            arr_21 [i_2] [i_3] [i_6] [i_5] [(_Bool)1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_2] [i_4] [i_6] [i_6 - 1])) / (((/* implicit */int) arr_13 [i_6] [(signed char)12] [i_6] [i_6 + 3]))));
                            arr_22 [i_2] [i_6] [i_4] [i_4] [(signed char)7] [i_3] [11ULL] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 2; i_7 < 11; i_7 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) (+(arr_18 [i_3] [i_4] [i_7 + 1] [i_7] [i_7 - 1])));
                        var_20 = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_8 = 2; i_8 < 13; i_8 += 1) 
                    {
                        arr_28 [i_2] [i_2 - 1] [i_8] = ((/* implicit */unsigned long long int) arr_13 [i_2] [i_2 - 1] [i_2] [i_2]);
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-95)) | (((/* implicit */int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)233))))) : (-426502386)));
                        arr_29 [i_4] [i_3] [i_8] [i_2] [i_2] [i_8] = ((/* implicit */unsigned long long int) ((signed char) arr_27 [i_2] [i_3] [i_8] [i_2] [i_8] [i_8 + 1]));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8] [i_8] [i_8 - 2])) ? (arr_18 [i_8 - 1] [i_8] [i_8] [i_8 + 1] [i_8 + 1]) : (arr_18 [i_8] [i_8] [i_8] [i_8] [i_8 - 2])));
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) arr_18 [i_2] [i_2] [i_2] [i_2 - 1] [i_2]);
        var_24 += ((/* implicit */_Bool) (((~(((/* implicit */int) arr_11 [i_2 + 1] [(unsigned char)2] [(_Bool)1])))) ^ (((((((/* implicit */int) arr_9 [i_2] [(signed char)7])) ^ (((/* implicit */int) arr_19 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_2])))) ^ (((/* implicit */int) arr_13 [(unsigned char)10] [i_2 + 1] [i_2] [i_2]))))));
        arr_30 [i_2 - 1] = ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_13 [i_2 + 1] [i_2] [i_2] [(signed char)1]), (var_3))))))) || (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)254)) > (((/* implicit */int) arr_2 [i_2 - 1] [i_2]))))), (((arr_15 [(unsigned char)11] [(unsigned char)11] [i_2] [i_2]) ? (((/* implicit */int) arr_8 [i_2])) : (arr_18 [i_2] [i_2] [i_2 + 1] [7ULL] [i_2 - 1])))))));
        var_25 = ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_10 [(signed char)4] [i_2] [(signed char)4])), (arr_7 [i_2]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)18)))))))) ? (((/* implicit */int) (!(((((/* implicit */int) (unsigned char)77)) == (((/* implicit */int) (short)26844))))))) : ((-(((((/* implicit */int) (unsigned char)233)) / (((/* implicit */int) arr_4 [i_2] [i_2])))))));
    }
    /* vectorizable */
    for (signed char i_9 = 1; i_9 < 13; i_9 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */_Bool) ((unsigned char) ((signed char) arr_8 [i_9])));
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_9] [i_9] [(unsigned char)8] [i_9] [i_9] [i_9])) != (((/* implicit */int) arr_31 [i_9 - 1] [(_Bool)1])))))));
        arr_33 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [(signed char)0] [i_9] [i_9] [i_9]))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_19 [i_9] [i_9] [(unsigned char)7] [(short)1] [i_9]))))) : (((/* implicit */int) arr_13 [i_9] [i_9 + 1] [i_9 - 1] [i_9]))));
        arr_34 [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -637277205)) ? (((/* implicit */int) arr_23 [i_9] [10] [i_9 - 1] [i_9])) : (((/* implicit */int) arr_26 [i_9 + 1] [i_9 + 1] [i_9] [i_9])))) << ((-(((/* implicit */int) arr_32 [i_9]))))));
    }
    for (signed char i_10 = 1; i_10 < 13; i_10 += 1) /* same iter space */
    {
        arr_37 [i_10] [i_10] = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_27 [i_10] [i_10] [(_Bool)1] [i_10] [i_10 + 1] [i_10])) >> (((arr_16 [i_10]) - (2024130813))))))), (((((((/* implicit */_Bool) arr_16 [i_10])) ? (((/* implicit */int) arr_4 [i_10] [(unsigned char)13])) : (((/* implicit */int) arr_1 [(signed char)6])))) << (((/* implicit */int) arr_11 [i_10 + 1] [i_10 - 1] [i_10]))))));
        var_28 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((var_6) ? (352613420) : (((/* implicit */int) arr_4 [i_10] [i_10 + 1]))))) ? (((((/* implicit */_Bool) -334943472)) ? (562949886312448ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_10] [i_10 - 1])) & (((/* implicit */int) (unsigned char)94))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_10])) ? (((/* implicit */int) (unsigned char)94)) : (((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)1)))))))));
    }
}
