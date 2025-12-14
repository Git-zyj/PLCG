/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98406
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_3 [i_1 + 2] [i_1 + 4]), (arr_3 [i_1 - 1] [i_1 + 4])))) >> (((/* implicit */int) ((short) arr_3 [i_1 + 1] [i_1 + 1])))));
                    var_20 *= ((/* implicit */short) ((((((/* implicit */_Bool) ((((-4326022550874916039LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)9179)) - (9160)))))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) >= (((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))));
                    var_21 = min((((long long int) var_15)), (((/* implicit */long long int) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
                    var_22 = ((/* implicit */short) max((((/* implicit */int) var_17)), (max((((/* implicit */int) ((-4326022550874916039LL) <= (((/* implicit */long long int) ((/* implicit */int) var_15)))))), (((((/* implicit */int) var_17)) >> (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))))));
                    var_23 *= ((/* implicit */short) (+(((/* implicit */int) var_7))));
                }
                for (short i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
                {
                    arr_12 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */short) (((+(var_9))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_6 [i_1 + 4] [i_1] [i_0]) << (((arr_2 [i_0] [(short)9]) - (5076188726383496348LL))))) > (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_3])) | (((/* implicit */int) arr_0 [i_1])))))))))));
                    var_24 = ((/* implicit */signed char) var_13);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 2) 
                    {
                        arr_16 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_1 + 1])) & (((/* implicit */int) arr_4 [(unsigned char)6] [i_0] [i_1 + 1]))))) ? ((+(4326022550874916042LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [(unsigned char)8] [i_1 + 1]))))));
                        arr_17 [i_0] = (~((~(((/* implicit */int) arr_4 [i_1 + 3] [i_1] [i_1 + 3])))));
                    }
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                {
                    var_25 *= ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0] [i_1 + 1])) & (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 1]))));
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_1])) | (((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_1 - 1]))));
                }
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) (+(((var_6) >> (((arr_2 [i_0] [i_1 + 1]) - (5076188726383496328LL))))))))));
                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]);
                var_28 = ((/* implicit */signed char) ((short) (short)-26693));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 2; i_6 < 24; i_6 += 1) 
    {
        for (short i_7 = 2; i_7 < 24; i_7 += 3) 
        {
            for (long long int i_8 = 2; i_8 < 22; i_8 += 2) 
            {
                {
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((arr_23 [i_7 - 2]) - (arr_23 [i_7 + 1]))) - (((arr_23 [i_7 - 1]) - (arr_23 [i_7 - 2]))))))));
                    arr_30 [i_6] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_28 [i_6 - 1] [i_7 - 2] [(unsigned short)1])) != (((/* implicit */int) (short)32760)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_6] [i_7 - 1] [i_8 - 1]))) == (4326022550874916042LL)))) : ((+(((/* implicit */int) (short)26690))))));
                    var_30 *= ((/* implicit */unsigned long long int) (-(((long long int) arr_21 [i_8 + 3]))));
                    arr_31 [i_6] [(short)1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_6 - 2] [i_7 - 1])) | (((/* implicit */int) arr_26 [i_6 - 2] [i_7 - 1]))))) ? (((/* implicit */int) max((arr_26 [i_6 - 2] [i_7 - 1]), (arr_26 [i_6 - 2] [i_7 - 1])))) : (((/* implicit */int) ((_Bool) arr_26 [i_6 - 2] [i_7 - 1])))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 3) 
            {
                {
                    arr_40 [i_9] [14ULL] [i_9] [i_11 + 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-26680))));
                    var_31 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_11 + 2] [i_11 - 1])) == (((/* implicit */int) arr_3 [i_11 - 1] [i_11 - 1])))) ? (arr_2 [i_11 - 1] [5LL]) : ((-(arr_2 [i_11 + 1] [i_11])))));
                }
            } 
        } 
    } 
}
