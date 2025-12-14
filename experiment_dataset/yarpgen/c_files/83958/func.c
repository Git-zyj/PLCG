/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83958
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) (+(min(((+(((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_0 [i_0] [i_0]))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                arr_8 [i_1] = ((/* implicit */long long int) var_2);
                arr_9 [i_0] [i_1] [i_1] = ((long long int) ((((/* implicit */unsigned int) min((arr_7 [i_2] [i_1] [i_2]), (((/* implicit */int) arr_0 [i_1] [i_2]))))) / (((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_1])) ? (arr_1 [i_0]) : (arr_6 [i_0] [i_1])))));
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [(_Bool)1])))) || (((/* implicit */_Bool) (unsigned char)255)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_1])) | (((/* implicit */int) (unsigned short)56590))));
                    arr_12 [i_1] [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) arr_11 [i_0] [i_1] [i_2] [i_2 - 1]));
                    var_14 = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0]);
                    var_15 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)2))));
                }
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_15 [i_1] = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_4]);
                /* LoopSeq 1 */
                for (short i_5 = 1; i_5 < 18; i_5 += 4) 
                {
                    arr_18 [i_0] [i_1] [i_4] [i_1] [i_4] [i_5] = ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_1]))) ^ (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_1] [i_4] [i_4] [i_5])) ? (-15LL) : (((/* implicit */long long int) var_2))))))));
                    arr_19 [(short)4] [i_1] [i_4] [i_5] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((((_Bool)1) || (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) ((signed char) arr_11 [i_0] [i_1] [i_4] [i_5]))) : (((/* implicit */int) ((_Bool) arr_17 [i_0] [i_1] [i_4] [i_5] [i_5] [i_4]))))))));
                }
                arr_20 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_9)))));
                var_16 = arr_7 [i_0] [i_1] [i_4];
                var_17 -= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_16 [(_Bool)1] [i_4])) + (var_8))));
            }
            for (unsigned int i_6 = 2; i_6 < 19; i_6 += 4) 
            {
                arr_25 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)250)) - (((/* implicit */int) var_10)))) * ((-(((/* implicit */int) arr_22 [i_6] [i_1] [i_0] [i_0]))))))) / (max((((/* implicit */unsigned int) arr_17 [i_6] [i_6 - 2] [i_6] [i_6] [i_6] [i_6])), (max((var_2), (((/* implicit */unsigned int) (_Bool)1))))))));
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned short) ((signed char) (signed char)(-127 - 1)))), (max(((unsigned short)65530), (((/* implicit */unsigned short) arr_3 [i_0] [i_6]))))))))));
                arr_26 [i_1] = ((/* implicit */unsigned int) var_7);
                var_19 = ((/* implicit */unsigned char) arr_13 [i_1] [i_1] [i_6] [i_6]);
                var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9764)) && ((_Bool)1)));
            }
            for (unsigned char i_7 = 3; i_7 < 19; i_7 += 4) 
            {
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((var_0) >> (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((arr_13 [12ULL] [i_0] [i_1] [i_7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))))))));
                var_22 = ((/* implicit */_Bool) min((var_22), (arr_3 [i_1] [(unsigned char)2])));
                arr_30 [i_1] [i_1] [i_1] = ((unsigned int) -6438113615060184430LL);
            }
            arr_31 [i_1] [i_1] = ((/* implicit */long long int) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1])) ? (arr_1 [i_0]) : (arr_6 [i_0] [i_0])))), (min((((/* implicit */unsigned long long int) var_10)), (var_5)))))));
        }
        arr_32 [i_0] |= ((/* implicit */unsigned long long int) min((arr_4 [i_0 + 1] [i_0 + 1]), (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_22 [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 1]))))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_24 [(signed char)16] [i_0] [i_0 - 1] [i_0]), (arr_24 [18] [i_0] [i_0 + 1] [i_0])))) ? (((/* implicit */int) arr_2 [14])) : ((+((+(((/* implicit */int) var_3)))))))))));
        arr_33 [i_0] [i_0] = ((/* implicit */signed char) var_6);
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        arr_36 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) | (arr_7 [i_8] [i_8] [i_8])));
        arr_37 [i_8] = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_22 [i_8] [i_8] [i_8] [i_8])))));
        arr_38 [i_8] = ((/* implicit */short) ((int) arr_6 [i_8] [i_8]));
        arr_39 [i_8] = ((/* implicit */_Bool) ((long long int) ((arr_34 [i_8]) * (10U))));
    }
    var_24 = ((/* implicit */long long int) max((min((var_2), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) (!((!(var_3))))))));
}
