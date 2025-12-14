/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55106
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_10 [3U] [i_2] [3U] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) 2147483647)) | (5973710075423338847LL)));
                            var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483625)) ? (774758159) : (1924704140)));
                            var_14 = (-(((unsigned long long int) (~(((/* implicit */int) (unsigned short)33861))))));
                        }
                    } 
                } 
                arr_11 [6U] [i_1] [i_0] = ((/* implicit */unsigned int) max((-2147483647), (min((774758190), (((/* implicit */int) (short)24522))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) & (((/* implicit */int) (!(((/* implicit */_Bool) max((2147483640), (-1470664409)))))))));
    /* LoopSeq 2 */
    for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_16 -= (~(((/* implicit */int) (signed char)-104)));
        var_17 += ((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) (unsigned char)141)))));
        var_18 = ((/* implicit */int) ((max((((/* implicit */unsigned int) (+(774758159)))), (arr_14 [i_4] [i_4]))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_13 [i_4]) | (arr_14 [(signed char)15] [i_4])))) ? (arr_12 [i_4] [i_4]) : (((/* implicit */int) ((((/* implicit */long long int) var_11)) < (-5973710075423338848LL)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            arr_17 [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)115));
            arr_18 [i_5] [15ULL] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_4] [8U]))));
            var_19 = ((/* implicit */signed char) (+(arr_15 [i_5] [i_5])));
        }
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                var_20 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_3 [i_6]) & (((/* implicit */unsigned int) 2147483633)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    var_21 -= ((/* implicit */int) ((long long int) arr_20 [i_6]));
                    var_22 -= ((/* implicit */unsigned int) var_3);
                    arr_31 [i_6] [9U] [i_7] [i_8] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) -2147483647))));
                    arr_32 [i_6] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 18014394214514688LL)))))));
                    var_23 += ((/* implicit */short) ((672933163U) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_7])))))));
                }
                arr_33 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2147483641)) || (((/* implicit */_Bool) -774758167))));
            }
            for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 4) 
            {
                arr_37 [(signed char)3] [(signed char)3] [i_7] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_6 [(unsigned char)10] [i_6])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (-2147483647)))) : ((-(8191U)))));
                arr_38 [i_6] [i_7] [i_10] = ((/* implicit */unsigned short) (~(var_0)));
            }
            /* LoopSeq 2 */
            for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
            {
                arr_43 [i_6] [i_7] [11ULL] = ((/* implicit */unsigned short) var_0);
                var_24 = ((/* implicit */unsigned int) arr_12 [i_6] [i_7]);
                arr_44 [i_6] [i_6] [6] [i_11] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_11] [i_7] [i_7] [(signed char)9] [i_6]))));
                var_25 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_6]))));
            }
            for (unsigned int i_12 = 3; i_12 < 13; i_12 += 2) 
            {
                /* LoopNest 2 */
                for (int i_13 = 4; i_13 < 11; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        {
                            arr_52 [i_14] [(unsigned char)6] [8U] [i_7] [(unsigned char)6] = ((/* implicit */unsigned char) arr_35 [i_6] [i_6] [i_6]);
                            arr_53 [i_6] [i_7] [i_12] [1LL] [13] [(_Bool)0] = ((/* implicit */short) var_10);
                            arr_54 [i_6] [i_7] [i_6] [i_12] [i_13 - 4] [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [1] [i_12] [1] [1] [1] [i_12 - 2]))) > (((((/* implicit */_Bool) -1924704140)) ? (((/* implicit */unsigned long long int) 2146435072)) : (arr_5 [i_6] [i_12 - 2] [8])))));
                        }
                    } 
                } 
                var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 774758190)) ? (((/* implicit */int) arr_35 [i_7] [i_7] [i_12])) : (arr_21 [i_12] [i_12])))) ? ((-(1366245560))) : (((((/* implicit */_Bool) 18014394214514667LL)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) arr_41 [(short)8]))))));
                var_27 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2147483640))));
            }
        }
        var_28 -= ((/* implicit */long long int) (-(arr_21 [i_6] [i_6])));
        var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_3 [i_6])) <= (-18014394214514668LL)));
        arr_55 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_45 [i_6] [i_6] [i_6] [i_6])) == (((/* implicit */int) arr_0 [i_6]))));
    }
}
