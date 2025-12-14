/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95582
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
    var_18 = ((/* implicit */signed char) var_12);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) ((signed char) min(((unsigned char)0), ((unsigned char)0))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_20 = ((((/* implicit */_Bool) (unsigned char)10)) ? (-1233646081) : (999033233));
                        var_21 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 - 1]))));
                        arr_10 [(unsigned short)2] [i_1] [i_2] [(unsigned short)2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_4 [i_0])), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_2] [i_1])) ? (((/* implicit */int) (unsigned char)0)) : (var_9)))), ((+(arr_6 [10LL] [i_0] [10])))))));
                        arr_11 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (-(max((-1233646081), (((int) arr_2 [i_2] [i_1] [i_0]))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2]))) >= ((+(arr_2 [i_0 + 2] [i_1] [i_1])))));
                    }
                } 
            } 
        } 
        arr_12 [1LL] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_12)), (((((/* implicit */_Bool) arr_6 [(short)6] [(signed char)12] [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))))) : (arr_9 [i_0 - 2] [(unsigned char)12] [(unsigned short)9] [i_0] [(unsigned short)9])))));
    }
    for (long long int i_4 = 2; i_4 < 13; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12))) : (4018857288086434363ULL)));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_23 = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 4018857288086434363ULL))))), ((((!(((/* implicit */_Bool) (unsigned char)106)))) ? (arr_1 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_2 [i_4 - 1] [i_4 + 2] [i_5])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) ^ (14427886785623117251ULL))) : (min((((/* implicit */unsigned long long int) arr_1 [i_4 + 1])), (var_16))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                arr_22 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_4] [i_5] [i_4 - 1])) ? (arr_6 [0ULL] [0ULL] [i_4 + 1]) : (arr_6 [(signed char)1] [i_5] [i_4 + 2])));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_4 + 1])) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) arr_4 [i_4 + 1]))));
                arr_23 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4 + 2] [i_4 - 2] [i_4 + 1] [i_4] [(unsigned char)10])) ? (((/* implicit */int) arr_8 [i_4 + 2] [i_4 - 2] [i_4 + 1] [i_4] [i_5])) : (((/* implicit */int) arr_8 [i_4 + 2] [i_4 - 2] [i_4 + 1] [i_5] [(unsigned char)10]))));
                var_26 ^= ((/* implicit */signed char) arr_13 [i_4 - 2]);
            }
        }
        for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_8 = 2; i_8 < 13; i_8 += 1) 
            {
                arr_29 [i_8 - 1] [i_7] [i_8 - 2] = ((/* implicit */int) ((((((/* implicit */int) var_14)) - (((/* implicit */int) var_7)))) != (((/* implicit */int) arr_17 [i_4 - 1] [i_4 - 2]))));
                var_27 += ((/* implicit */unsigned char) ((arr_2 [i_4] [i_4 + 1] [i_8 + 2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_4] [i_7] [i_8 + 2] [(_Bool)1])))));
            }
            /* vectorizable */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_28 += ((/* implicit */short) ((unsigned short) arr_28 [i_9 - 1] [i_9 - 1]));
                var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (-(1233646080)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_18 [i_7] [i_7] [i_9])));
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */signed char) ((((((/* implicit */int) var_1)) | (((/* implicit */int) arr_3 [i_7] [i_10 - 1])))) ^ (((((/* implicit */int) arr_3 [i_4 + 2] [i_7])) ^ (((/* implicit */int) arr_3 [i_4 - 1] [i_7]))))));
                var_31 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_34 [i_10] [(_Bool)1] [i_10])))) - (((((/* implicit */_Bool) (short)-6651)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_28 [i_10 - 1] [i_4 - 1]))))));
                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
            }
            var_33 = ((/* implicit */short) (-((+(((/* implicit */int) ((signed char) -6772999437876216632LL)))))));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                for (unsigned short i_12 = 3; i_12 < 13; i_12 += 3) 
                {
                    for (unsigned short i_13 = 1; i_13 < 11; i_13 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 8466537868508645371ULL)))))) : (min((arr_30 [i_4 - 2] [(short)9] [i_4 - 2]), (((/* implicit */unsigned int) (unsigned short)9701)))))) | (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_4 - 2] [i_7] [i_4])) << (((((/* implicit */int) (unsigned char)188)) - (172)))))), ((+(4294967295U)))))));
                            arr_43 [i_11] [(unsigned char)13] = ((/* implicit */signed char) (((((+(((/* implicit */int) arr_39 [i_4 + 2] [i_11] [i_11] [i_11] [i_12 + 1] [7LL] [i_13 + 3])))) | ((-(1888911163))))) != (((/* implicit */int) (unsigned char)255))));
                            arr_44 [i_4] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (short)-11))))) ? (min((arr_33 [i_7] [i_12 + 2] [i_11] [(unsigned char)0]), (arr_33 [i_7] [i_12 + 2] [i_11] [9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [(unsigned char)1] [i_12 + 2] [i_11] [i_13])) && (((/* implicit */_Bool) arr_33 [i_7] [i_12 + 2] [i_11] [i_12 + 2]))))))));
                            var_35 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_13 + 3] [i_4 - 1] [i_12 + 1] [11] [i_13])) ? (min((16817835279201091433ULL), (((/* implicit */unsigned long long int) arr_39 [i_12 - 2] [i_7] [i_11] [i_7] [i_13] [i_13 + 2] [i_7])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) var_6))))) ? (((/* implicit */int) min((arr_19 [i_7] [i_11] [(signed char)10]), (((/* implicit */unsigned short) (signed char)-42))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)-27756)) : (((/* implicit */int) var_13)))))))));
                            arr_45 [i_4 - 1] [i_11] = ((/* implicit */int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)26206))))) ? ((+(9980206205200906262ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)32767)) ^ (((/* implicit */int) arr_32 [i_4 - 2] [i_7] [i_4 - 2]))))))) ^ (((/* implicit */unsigned long long int) arr_1 [i_4]))));
                        }
                    } 
                } 
            } 
        }
        arr_46 [3ULL] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_1 [(signed char)7])), (((4018857288086434392ULL) ^ (((((/* implicit */_Bool) arr_21 [i_4] [i_4 + 2] [8])) ? (((/* implicit */unsigned long long int) 0U)) : (arr_33 [i_4] [(signed char)6] [(signed char)6] [i_4 + 1])))))));
        arr_47 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))) : (arr_15 [i_4 - 2])))) ? (max((2LL), (((/* implicit */long long int) (short)-27760)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_6)) : (var_17))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) 1628908794508460183ULL)) ? (((/* implicit */unsigned long long int) arr_1 [i_4 - 2])) : (8466537868508645386ULL))))) : (var_16)));
    }
}
