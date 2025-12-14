/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72132
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
    var_14 = ((/* implicit */short) var_10);
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((4664994880067159809ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54580))))) ? (((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_6)) - (41866))))) : (((/* implicit */int) var_9)))))));
    var_16 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_8))))), (var_4)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        arr_3 [17ULL] = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-6212453054919583135LL));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_7) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 3])) + (4980)))))) ? (((((/* implicit */_Bool) -1759711862754101200LL)) ? (2278359459346237468ULL) : (((/* implicit */unsigned long long int) 65171871)))) : (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) var_10)))))));
            arr_8 [(unsigned short)11] = ((/* implicit */signed char) ((unsigned short) 65171861));
            arr_9 [(unsigned short)16] = ((/* implicit */short) var_7);
            arr_10 [i_0] = ((/* implicit */unsigned char) arr_2 [i_1] [(signed char)18]);
        }
        for (short i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                arr_17 [(short)5] [i_2] [i_3] = ((/* implicit */unsigned char) var_0);
                /* LoopSeq 4 */
                for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    arr_22 [(short)15] [i_3] [i_4] = ((/* implicit */short) arr_12 [19U]);
                    arr_23 [18] [(short)3] [i_2] [i_3] [(unsigned short)9] = ((/* implicit */signed char) arr_14 [i_0] [i_0] [i_4] [i_4]);
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        arr_27 [i_0] [(_Bool)1] [i_3] [i_4] [i_4] [i_5] = ((/* implicit */int) ((long long int) (~(-65171871))));
                        arr_28 [i_2] = ((/* implicit */int) ((4664994880067159809ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((((/* implicit */short) var_3)), (var_11))))))));
                    }
                }
                for (short i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    arr_32 [7ULL] [i_6] [(unsigned char)9] [i_6] [21LL] = ((/* implicit */signed char) min((((/* implicit */short) (_Bool)1)), (arr_1 [i_6])));
                    arr_33 [i_0] [i_2] [i_2] [i_2] [i_3] [i_6] = ((/* implicit */short) var_12);
                    arr_34 [i_0] = max((((/* implicit */int) (unsigned short)0)), (-518229339));
                }
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    arr_37 [i_0] [i_0] [i_7] = ((/* implicit */int) ((min((6525490339708632737ULL), (((/* implicit */unsigned long long int) var_10)))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_0])) << (((((/* implicit */int) arr_19 [i_3])) - (2326))))))));
                    arr_38 [i_3] [22LL] [(_Bool)1] [i_2] [(signed char)6] [i_7] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 7558974055745657761LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))) : ((+(((/* implicit */int) (unsigned char)208))))))));
                }
                for (signed char i_8 = 2; i_8 < 20; i_8 += 1) 
                {
                    arr_41 [i_0] [i_8] [i_2] [i_0] [(_Bool)1] = ((/* implicit */short) arr_36 [i_8 - 2] [i_8] [i_8] [i_0 - 3] [i_8] [i_0]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        arr_44 [i_0] [i_8] [i_8] [i_0] [i_9] [i_2] = ((/* implicit */unsigned char) var_2);
                        arr_45 [i_0] [i_2] [i_0] [i_8] [i_8] = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) arr_36 [i_9] [i_8] [i_0] [i_0] [i_8] [i_0])))));
                    }
                    arr_46 [i_2] [(signed char)16] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_8 - 2])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_39 [i_3]))))));
                }
                arr_47 [(_Bool)1] [(_Bool)1] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2]))) : (max((8715652U), (((/* implicit */unsigned int) (unsigned short)65535))))))));
                arr_48 [i_0] [i_2] [(unsigned char)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) arr_4 [i_0 - 2] [17] [i_3])))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_4)))) ? (((/* implicit */int) var_11)) : (var_1)))));
            }
            arr_49 [4ULL] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) 2778524U)) ? (-250236442) : (((/* implicit */int) arr_43 [i_2] [i_2] [(unsigned short)1] [i_2] [i_0 + 2] [i_2]))))))));
        }
        for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 4) 
        {
            arr_52 [i_10] = ((/* implicit */int) ((signed char) arr_16 [i_10] [(signed char)6] [(short)2]));
            arr_53 [i_0] [i_0] [i_10] = ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))) : (((65171871) / (((/* implicit */int) var_13)))))) >> (((((/* implicit */int) arr_26 [i_0] [9ULL] [i_0] [14LL] [i_0 + 2] [i_10 - 1])) + (55))));
            arr_54 [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) min((min((((/* implicit */int) arr_18 [i_10] [i_10 - 1] [(unsigned short)14] [(short)21])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_31 [i_10] [i_0])))))), (2147483629)));
        }
    }
}
