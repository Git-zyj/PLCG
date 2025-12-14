/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98714
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) min((arr_2 [i_0] [i_0]), ((unsigned short)46698)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) arr_7 [i_2] [i_1]))));
                                arr_17 [i_1] [i_0] [i_2] = ((/* implicit */signed char) ((((((/* implicit */int) arr_7 [i_1] [i_0 - 2])) & (((/* implicit */int) arr_7 [i_1] [i_0 - 2])))) << (((((/* implicit */int) max((arr_7 [i_1] [i_0 - 2]), ((unsigned char)255)))) - (242)))));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] [(short)4] [i_2] = max((((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) var_8))))), (arr_0 [i_0 - 3]));
                }
            } 
        } 
    }
    for (unsigned int i_5 = 3; i_5 < 9; i_5 += 3) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_9)))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)236)))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))) < (arr_10 [i_5])))))))));
        var_13 |= ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [(signed char)6] [(signed char)6]))));
    }
    /* LoopSeq 1 */
    for (int i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        arr_25 [i_6] = ((/* implicit */signed char) max(((unsigned short)24956), (((/* implicit */unsigned short) arr_24 [i_6]))));
        arr_26 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6]))) == (((unsigned long long int) arr_24 [i_6]))));
        var_14 = ((/* implicit */signed char) arr_22 [i_6] [i_6]);
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 1; i_7 < 16; i_7 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_8 = 2; i_8 < 14; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        {
                            var_15 |= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) max(((unsigned short)14), (((/* implicit */unsigned short) var_2))))), (((unsigned long long int) (unsigned short)45405)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max((var_8), (arr_27 [i_7] [i_7] [i_9])))) <= ((~(((/* implicit */int) (unsigned char)247))))))))));
                            arr_36 [i_6] [i_6] [8U] [(short)4] [i_10] = ((/* implicit */unsigned int) ((max((((((/* implicit */int) (signed char)106)) + (((/* implicit */int) (unsigned char)20)))), ((~(((/* implicit */int) arr_34 [(unsigned short)9] [(unsigned short)9] [i_8 + 1] [(short)11] [(unsigned short)9])))))) < (((((/* implicit */_Bool) ((unsigned int) arr_22 [5LL] [i_7]))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_27 [i_6] [i_7 - 1] [i_8 + 1]))))) : (((/* implicit */int) ((((/* implicit */int) (short)17273)) <= (((/* implicit */int) arr_23 [i_7])))))))));
                            arr_37 [i_6] [(signed char)8] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) max((1354732243U), (((/* implicit */unsigned int) ((((116280141155686547LL) & (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_10]))))) == (((/* implicit */long long int) ((/* implicit */int) (short)16384))))))));
                        }
                    } 
                } 
            } 
            arr_38 [i_6] [i_7] = ((/* implicit */unsigned char) min((min((((/* implicit */int) (unsigned char)6)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) arr_31 [i_6] [i_6])))))), (((((/* implicit */int) arr_35 [i_7 - 1] [i_6] [i_7] [i_7] [i_7] [i_6] [i_7])) - (((/* implicit */int) arr_34 [i_7 + 1] [(unsigned char)6] [i_7 + 1] [9U] [i_6]))))));
            arr_39 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-((+((-(((/* implicit */int) arr_27 [i_6] [3U] [i_6]))))))));
            var_16 ^= ((/* implicit */unsigned int) (short)32767);
        }
        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            var_17 &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [14U] [i_11] [i_6] [i_11] [i_11]))));
            arr_44 [(signed char)4] [i_11] [i_11] |= ((/* implicit */unsigned char) (-(((/* implicit */int) (short)7))));
            arr_45 [i_6] = ((/* implicit */short) ((((/* implicit */int) ((((arr_33 [i_6] [i_6] [i_6] [(signed char)15] [(signed char)15]) ? (((/* implicit */int) (unsigned short)45404)) : (((/* implicit */int) arr_35 [i_6] [i_6] [i_6] [(unsigned short)4] [i_11] [i_11] [i_6])))) > (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)23207))))))) > (((/* implicit */int) min((var_3), ((!(((/* implicit */_Bool) var_8)))))))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((max(((unsigned short)11547), (((/* implicit */unsigned short) arr_27 [i_6] [i_6] [i_11])))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_6] [i_11] [i_6])) < (((/* implicit */int) arr_27 [i_6] [i_6] [i_11]))))))))));
        }
    }
    var_19 ^= ((/* implicit */unsigned short) var_9);
}
