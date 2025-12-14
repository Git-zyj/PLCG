/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57397
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
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_6))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_0 [0ULL]))));
        arr_2 [i_0] [9] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-1))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((24LL), (((/* implicit */long long int) (signed char)-1)))))));
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (15129451440171348260ULL))))), (((((/* implicit */_Bool) (unsigned char)16)) ? (3317292633538203356ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [i_1] [i_1])) & (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))))) % (min((((/* implicit */long long int) arr_5 [i_1] [i_1])), (arr_6 [9U])))))));
        var_20 += ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]);
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_21 = ((/* implicit */long long int) ((signed char) arr_5 [i_2] [i_2]));
        var_22 = ((/* implicit */unsigned int) ((arr_1 [i_2]) | (arr_1 [i_2])));
        var_23 = ((/* implicit */signed char) ((int) arr_11 [i_2] [i_2]));
        arr_13 [i_2] = ((/* implicit */unsigned short) (~(arr_9 [i_2])));
        /* LoopSeq 2 */
        for (signed char i_3 = 2; i_3 < 7; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 9; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_3 + 4])) | (((/* implicit */int) arr_10 [i_4 - 2]))));
                        arr_23 [i_2] = ((/* implicit */signed char) 15129451440171348260ULL);
                        arr_24 [i_4] [6LL] = (~(((((/* implicit */_Bool) (short)-28164)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) arr_0 [i_4])))));
                    }
                } 
            } 
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_3 - 2])) ? (arr_22 [i_3 - 1]) : (arr_22 [i_3 + 4])));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_3 - 2])) ? (arr_22 [i_3 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3] [i_3 - 1] [i_3] [i_3 - 1])))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_1 [i_6]))) || (((/* implicit */_Bool) var_0))));
                        arr_31 [i_6] [i_6] [i_6] [i_7] = ((/* implicit */int) arr_0 [i_6]);
                        var_28 = ((/* implicit */unsigned char) var_5);
                        var_29 = ((/* implicit */int) ((arr_22 [i_6]) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_11))))));
                    }
                } 
            } 
        }
        for (int i_8 = 1; i_8 < 9; i_8 += 4) 
        {
            arr_35 [i_2] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_8 - 1] [i_8])) && (((/* implicit */_Bool) arr_33 [i_8 - 1] [i_8]))));
            var_30 = arr_22 [i_2];
            /* LoopNest 3 */
            for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                for (unsigned char i_10 = 2; i_10 < 10; i_10 += 1) 
                {
                    for (unsigned int i_11 = 2; i_11 < 8; i_11 += 4) 
                    {
                        {
                            arr_42 [i_9] [i_9] [i_9] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_40 [i_8] [i_2] [9] [i_8] [i_8])) ? (arr_40 [i_8] [i_9] [i_9] [i_9] [(signed char)3]) : (arr_40 [i_8] [(signed char)10] [(signed char)10] [i_9] [i_11 + 1])));
                            var_31 ^= ((/* implicit */unsigned short) ((int) arr_7 [i_8 - 1]));
                            var_32 = ((/* implicit */short) arr_15 [i_8 - 1]);
                            arr_43 [i_8] [i_8 + 1] [i_9] [i_10] [i_11 + 3] = ((/* implicit */unsigned int) var_1);
                            var_33 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)20))));
                        }
                    } 
                } 
            } 
            var_34 += ((/* implicit */unsigned char) arr_5 [i_8 - 1] [i_8 + 2]);
        }
    }
    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
    {
        var_35 = ((/* implicit */short) ((unsigned short) arr_46 [i_12]));
        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_45 [8]))))))));
    }
}
