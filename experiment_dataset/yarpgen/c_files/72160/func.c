/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72160
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_1] = arr_3 [i_1 + 1] [i_1] [i_1 - 2];
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    var_10 = ((/* implicit */short) (~(arr_8 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 2])));
                    var_11 = ((/* implicit */unsigned int) 535353699813747944ULL);
                }
                for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    var_12 = ((/* implicit */unsigned int) (_Bool)1);
                    arr_14 [i_0] [i_1 + 1] [i_2] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_12 [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : (((/* implicit */int) arr_12 [i_1 - 1] [i_1 - 1])))) >> (((((/* implicit */int) arr_12 [i_1 + 2] [i_1 + 1])) + (123)))));
                    arr_15 [i_1] = ((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 1]);
                }
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)(-127 - 1)))))));
                    var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_17 [(unsigned char)9] [i_0] [i_1] [i_2] [i_5]))))));
                }
                var_15 = ((/* implicit */unsigned char) arr_11 [i_0] [i_2]);
                arr_20 [i_1] [i_0] [i_1] [i_2] = ((/* implicit */signed char) (_Bool)1);
            }
            for (short i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        {
                            arr_31 [i_6] [i_1] [i_6] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2063226159) + (-1192802973)))) ? (((/* implicit */int) arr_23 [i_6] [i_6] [0ULL] [i_6] [i_6] [i_1 - 1])) : (((((/* implicit */int) arr_21 [i_6])) + (-1192802965)))));
                            var_16 = ((/* implicit */signed char) (-(var_6)));
                            var_17 = ((/* implicit */unsigned short) (+(((arr_25 [i_0] [i_1] [i_1] [i_7] [(unsigned short)8]) ? (((/* implicit */unsigned long long int) -1192802962)) : (var_0)))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) arr_4 [i_1]);
            }
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_9 = 3; i_9 < 15; i_9 += 1) 
        {
            arr_34 [i_9] [i_9] [i_0] = ((/* implicit */unsigned short) arr_24 [i_9] [i_9 - 2] [i_9] [i_9]);
            var_19 = ((/* implicit */unsigned char) arr_9 [i_9] [i_9] [(unsigned char)6]);
        }
        for (unsigned char i_10 = 1; i_10 < 14; i_10 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) var_7);
            /* LoopSeq 4 */
            for (unsigned short i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned short) var_1);
                var_22 = ((/* implicit */signed char) ((short) min((-562784821), (((/* implicit */int) (signed char)-106)))));
                var_23 = ((/* implicit */signed char) (_Bool)0);
            }
            /* vectorizable */
            for (unsigned short i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
            {
                arr_42 [i_12] = ((/* implicit */unsigned int) (signed char)64);
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_0])) >> (((/* implicit */int) arr_21 [i_0]))))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_22 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) var_7)) - (165)))))) : (arr_17 [i_0] [i_0] [i_10] [(signed char)14] [i_12])));
            }
            for (unsigned short i_13 = 0; i_13 < 17; i_13 += 1) /* same iter space */
            {
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */short) arr_21 [8LL])), ((short)32762))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_10] [i_10] [(unsigned short)0] [i_13]))) : (min((839054660U), (((/* implicit */unsigned int) (short)-32763))))));
                var_26 = (unsigned char)24;
                arr_47 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_40 [i_0] [i_10] [i_13])))) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) min((arr_36 [i_0] [i_0]), (((/* implicit */unsigned short) (unsigned char)199)))))))) ? ((+((-(8601102789766834217LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)-6254))))));
            }
            /* vectorizable */
            for (unsigned short i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    var_27 = ((/* implicit */long long int) (~(arr_6 [i_0] [i_10 - 1] [i_0] [i_15])));
                    var_28 = ((/* implicit */short) arr_27 [i_0] [i_10 + 3] [i_14] [i_15] [i_15 - 1] [i_14] [i_15 - 1]);
                    var_29 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_17 [i_15] [i_10] [0] [i_10] [0])) ? (var_0) : (((/* implicit */unsigned long long int) 3899141429U))))));
                    var_30 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_37 [i_10 + 3] [i_15 - 1])) : (((/* implicit */int) (_Bool)1))));
                    arr_54 [i_0] [i_0] [i_0] [i_14] = (_Bool)1;
                }
                var_31 = ((/* implicit */unsigned short) arr_24 [i_0] [i_10 + 3] [i_10] [i_14]);
                var_32 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0] [i_14] [i_14]))));
            }
        }
        for (unsigned char i_16 = 0; i_16 < 17; i_16 += 4) 
        {
            arr_57 [i_0] [i_16] = ((/* implicit */unsigned short) (-((-((+(((/* implicit */int) (unsigned short)4941))))))));
            /* LoopSeq 1 */
            for (unsigned short i_17 = 1; i_17 < 15; i_17 += 4) 
            {
                arr_62 [i_17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_17 + 1] [i_16] [i_0] [i_0])) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_16] [i_17] [1ULL])) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_16] [i_17 - 1] [i_17] [i_16])))))));
                arr_63 [(signed char)13] [(signed char)13] [i_17] = ((/* implicit */short) max((min((arr_35 [i_17] [i_17 - 1] [i_17 - 1]), (arr_35 [i_17 - 1] [i_17 + 2] [i_17 - 1]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3)))))));
            }
            var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_44 [3ULL] [i_16] [3ULL]))))) / (min((((/* implicit */unsigned long long int) 1893067887U)), (var_0))))))));
        }
        arr_64 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    var_34 = ((/* implicit */unsigned char) var_6);
}
