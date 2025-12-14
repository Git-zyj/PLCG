/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64450
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) 10649731988062772239ULL))));
                    arr_7 [i_0 - 1] [i_2] [i_2 + 2] [i_2 + 2] &= (-(max((((arr_1 [i_2]) % (4294967287U))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)30868))))))));
                }
            } 
        } 
        var_21 *= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 7797012085646779371ULL)) ? (((/* implicit */unsigned int) arr_3 [6U])) : (arr_1 [i_0 + 1]))));
        arr_8 [(unsigned short)16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) arr_3 [10LL])) >= (arr_1 [i_0 - 1]))) ? (((-2147483636) % (arr_3 [22U]))) : (((/* implicit */int) ((9ULL) >= (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])))))))) ? (((((/* implicit */int) ((unsigned short) 24ULL))) % (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_6 [i_0]) : (arr_3 [(unsigned short)10]))))) : (((/* implicit */int) ((unsigned short) arr_2 [i_0])))));
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            {
                arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 15659032310490787008ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26542))) : (23ULL)));
                arr_14 [i_4] = ((((/* implicit */_Bool) arr_12 [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3]))) : (max((min((((/* implicit */unsigned int) (unsigned short)34656)), (var_8))), (((/* implicit */unsigned int) arr_6 [(unsigned char)24])))));
                arr_15 [i_3] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (arr_0 [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */int) var_16)) : (arr_5 [i_3] [i_3]))) >= ((((_Bool)1) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) var_16)))))))) : (((((/* implicit */_Bool) arr_3 [i_4])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 1) 
                {
                    arr_18 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) arr_12 [11U] [(_Bool)1]);
                    arr_19 [(unsigned char)15] [i_5] [i_5] = ((/* implicit */unsigned long long int) min((((max((arr_6 [i_3]), (arr_3 [i_5]))) | (((/* implicit */int) (unsigned char)186)))), (max((((/* implicit */int) ((unsigned char) arr_12 [9] [i_4]))), (((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) arr_11 [(unsigned short)18] [i_4] [(unsigned short)18])) : (arr_3 [i_5])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (long long int i_7 = 3; i_7 < 23; i_7 += 1) 
                        {
                            {
                                arr_26 [10U] [i_5] [i_5] [i_5] [i_5] [i_3] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)201)), (arr_1 [i_3])))) ? (((((/* implicit */int) (signed char)121)) | (arr_22 [i_3] [i_4] [i_5 + 1] [i_6] [(short)17]))) : (((/* implicit */int) var_2))))) & (arr_1 [i_3]));
                                arr_27 [i_5] [i_6] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [(short)2] [(short)2]))))) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_25 [i_3] [i_3] [i_3] [i_3] [21LL] [i_3])))) : (((((/* implicit */int) arr_23 [(unsigned char)23] [i_6] [i_5] [i_3] [i_3])) - (((/* implicit */int) arr_25 [i_7] [i_6] [i_5] [i_3] [i_3] [i_3])))))), (((/* implicit */int) ((unsigned char) arr_9 [i_7 - 2])))));
                                arr_28 [i_4] [i_4] [(_Bool)1] [i_5] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((-91442245) + (((/* implicit */int) (unsigned short)65524)))), (((/* implicit */int) ((unsigned short) (unsigned short)13)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_24 [i_3] [i_3] [i_3] [i_3])) : (arr_22 [(unsigned short)1] [(unsigned short)1] [i_6] [i_6] [i_6])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [16ULL] [(_Bool)1] [i_5 + 2]))) : (((unsigned int) 23ULL))))));
                                arr_29 [i_5] = ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_4)))), (((long long int) var_17))))) ? (((/* implicit */unsigned long long int) ((min((((/* implicit */int) (unsigned short)17)), (arr_10 [i_3]))) % (((int) arr_6 [i_3]))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_9 [i_7]), ((unsigned short)32424))))) : ((~(16760749908881357476ULL))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = var_12;
    var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) var_10)) % (4079836373563210976ULL)))))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (-6505346091902794700LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30846)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_6)) : (var_19))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65529)))))));
}
