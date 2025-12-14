/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98776
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_17 = max(((unsigned char)212), ((unsigned char)36));
                    var_18 = var_9;
                    arr_7 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) var_1);
                    arr_8 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)248))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_3 = 4; i_3 < 13; i_3 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)32))));
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_10)), (arr_10 [i_3 - 4])))) ? ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)24965)) < (((/* implicit */int) (unsigned char)221))))))) : (((/* implicit */int) ((signed char) ((unsigned char) var_8))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned char) 18446744073709551615ULL);
        /* LoopSeq 3 */
        for (signed char i_5 = 4; i_5 < 17; i_5 += 1) 
        {
            arr_19 [i_4] = ((/* implicit */unsigned short) (unsigned char)129);
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_4])) ? (2295624326835967283ULL) : (3673353093806004157ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
            arr_20 [i_4] [i_5] [i_4] = ((/* implicit */signed char) arr_4 [8ULL] [i_5]);
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 3) 
            {
                arr_23 [2ULL] [i_4] [i_4] [2ULL] = ((/* implicit */unsigned long long int) (unsigned char)234);
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(unsigned short)15] [i_4] [i_6])) >> (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (unsigned short)13319))))) : (var_6)));
            }
            for (signed char i_7 = 3; i_7 < 19; i_7 += 2) 
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 11641454182651521982ULL)))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_25 [i_4] [11ULL] [i_7])))))))));
                var_24 = ((unsigned char) (unsigned char)216);
            }
        }
        for (unsigned long long int i_8 = 4; i_8 < 18; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) var_9);
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_30 [i_8 - 4] [i_8] [i_4] [i_9 - 2])) + (((((/* implicit */int) arr_27 [i_4])) << (((((/* implicit */int) (signed char)44)) - (20)))))));
                    var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)135))));
                    var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_3)))) ? ((~(((/* implicit */int) arr_13 [i_9] [2ULL])))) : (((/* implicit */int) arr_16 [i_4]))));
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)49223)) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) arr_13 [i_8 + 2] [i_8 + 2])))))));
                }
            }
            var_30 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))))))));
            var_31 = ((unsigned short) arr_24 [i_4] [17ULL] [i_8 + 2]);
            arr_32 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)1)) != (((/* implicit */int) var_16))));
        }
        for (signed char i_11 = 3; i_11 < 18; i_11 += 4) 
        {
            var_32 = ((/* implicit */unsigned long long int) max((var_32), ((+(arr_12 [i_11 - 1] [i_11 - 2])))));
            var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */int) (unsigned short)13319)) ^ (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_4]))) >= (126890370851284805ULL))))));
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                arr_37 [i_4] [i_11] [i_11 + 1] [i_12] = ((/* implicit */unsigned char) ((signed char) 16151119746873584336ULL));
                var_34 = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_4])) | (((/* implicit */int) var_11))));
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 3; i_13 < 18; i_13 += 1) 
                {
                    var_35 = ((/* implicit */signed char) ((unsigned long long int) var_12));
                    arr_41 [(unsigned char)2] [i_11] [i_11] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_12] [i_4] [i_11 - 2]))) != (6805289891058029653ULL)));
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) arr_16 [i_4])) : (((/* implicit */int) var_9))));
                }
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)12)) > (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-62))))));
            }
        }
    }
    var_38 = max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_12)) != (((/* implicit */int) (signed char)-60))))), (var_0)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)14007)))) : (((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))) : (var_6))))));
}
