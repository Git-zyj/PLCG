/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97696
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)244)) || (((/* implicit */_Bool) (unsigned short)45494)))))) | (min((var_11), (var_10)))));
    var_19 ^= min((min((10ULL), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_14)))) ^ ((-(((/* implicit */int) var_6))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24)) ? (16315763089760319975ULL) : (9980851527534078441ULL)))) ? (((((/* implicit */_Bool) 14319162185407052962ULL)) ? (((/* implicit */int) (short)32751)) : (((/* implicit */int) (short)21813)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)11] [i_2]))) < (arr_0 [i_0] [i_1]))))))));
                    arr_8 [i_0] [(unsigned short)12] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-21813)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21813))) | (((((/* implicit */_Bool) 2130980983949231640ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7708))) : (10156354881169223964ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12497))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45222)) ? (((arr_2 [i_3]) | (arr_2 [i_1]))) : (18446744073709551615ULL)));
                        arr_11 [i_0] [(_Bool)1] [(short)9] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_4 [i_2] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3]))) : (8465892546175473182ULL)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (5928756392792998395ULL)));
                            var_23 = ((/* implicit */_Bool) (short)(-32767 - 1));
                            arr_14 [(short)5] [i_1] [i_2] [i_1] [(unsigned short)10] = ((/* implicit */short) arr_4 [i_0] [i_3]);
                            var_24 -= (unsigned short)50009;
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_2] [13ULL] [i_4]))))) ? ((+(((/* implicit */int) (unsigned short)64259)))) : (((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (short)21813)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))));
                        }
                        arr_15 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))));
                    }
                    arr_16 [i_0] [i_1] [(unsigned char)3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)23)))) ? ((~(((/* implicit */int) (unsigned char)114)))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_2] [i_2] [i_1] [i_0]))))))) >= (2728458891230620452ULL)));
                }
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    arr_21 [i_0] [(unsigned char)11] [(unsigned char)11] = ((/* implicit */short) max(((~(((unsigned long long int) (unsigned short)1257)))), (min((((unsigned long long int) arr_0 [(short)9] [i_1])), (((arr_7 [i_0] [i_1] [i_5]) | (4127581888302498654ULL)))))));
                    var_26 -= ((/* implicit */short) arr_9 [i_5] [i_5] [i_5] [i_0]);
                    arr_22 [i_0] [i_0] [i_1] [i_5] = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [(_Bool)1]))))), (min((((/* implicit */unsigned short) arr_18 [i_0] [i_1] [i_1] [(_Bool)1])), ((unsigned short)0))))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5] [i_1]))) & (((arr_0 [i_0] [13ULL]) & (10036604223230685708ULL))))));
                    arr_23 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2728458891230620473ULL)) ? (((((/* implicit */_Bool) 15718285182478931164ULL)) ? (((2728458891230620473ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18618))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) : (((arr_7 [i_0] [i_1] [i_0]) << (((/* implicit */int) arr_17 [i_0] [(unsigned short)10] [i_1] [i_5]))))));
                }
                arr_24 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)0);
            }
        } 
    } 
}
