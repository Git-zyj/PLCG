/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66639
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
    var_13 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */unsigned long long int) ((short) (+(arr_10 [i_0]))));
                    arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1] = (!(((/* implicit */_Bool) min((arr_0 [i_1 - 2]), (((/* implicit */unsigned short) ((signed char) arr_0 [i_2])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_3 = 3; i_3 < 22; i_3 += 3) 
    {
        arr_16 [i_3] = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3 + 1]))) - (7697902198965437108ULL)))));
        arr_17 [i_3 - 3] = arr_12 [i_3 - 3];
        arr_18 [i_3] = ((/* implicit */short) (((+(8ULL))) != (((arr_13 [i_3 - 2] [i_3 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            /* LoopNest 3 */
            for (short i_5 = 3; i_5 < 22; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        {
                            arr_27 [i_5] [i_5] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)-22193))))));
                            arr_28 [i_5] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((_Bool) arr_13 [i_4] [i_3 - 3])) && (((/* implicit */_Bool) (short)32767))));
                        }
                    } 
                } 
            } 
            arr_29 [i_3] [(signed char)1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 10748841874744114508ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))));
            var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_4])) && (((((/* implicit */_Bool) (short)23306)) && (((/* implicit */_Bool) (unsigned short)25842))))));
            var_16 -= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)25826)) <= (((/* implicit */int) arr_21 [i_4])))) || (((/* implicit */_Bool) (short)-22208))));
            arr_30 [i_3] [i_4] = ((/* implicit */_Bool) (-((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5952))) : (7292016878829552473ULL)))));
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 3; i_10 < 20; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 3; i_11 < 20; i_11 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_3] [i_3])) | ((-(((/* implicit */int) arr_34 [(short)16] [(short)16])))))))));
                            arr_43 [i_3 + 1] [i_8] [i_9] [i_8] [i_8] [(signed char)8] [i_3 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-5))))) ? ((+(((/* implicit */int) arr_22 [i_8])))) : ((-(((/* implicit */int) (short)-19349))))));
                        }
                    } 
                } 
            } 
            arr_44 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */int) arr_22 [i_8])) : (((((/* implicit */_Bool) (unsigned short)60961)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        }
        arr_45 [i_3] = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_12 [i_3]))) >= (((arr_36 [i_3 - 2] [i_3] [i_3 - 2]) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_14 [i_3]))))))), ((signed char)34)));
    }
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (8216726319301150066ULL))), (((((/* implicit */_Bool) (signed char)1)) && (((/* implicit */_Bool) var_2))))))), ((unsigned short)62734)));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_11), ((unsigned short)21185)))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (short)8)) : (((/* implicit */int) (short)-31474)))) : (((/* implicit */int) var_12))));
}
