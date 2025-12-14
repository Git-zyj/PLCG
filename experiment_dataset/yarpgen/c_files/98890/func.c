/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98890
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (max((((/* implicit */unsigned short) var_5)), (var_12))))))) | (var_10)));
    var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (short)-31299)) ^ (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (var_1)))))) < (min((((((/* implicit */int) var_2)) % (var_11))), (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_0 + 1] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_1]);
                arr_9 [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_3 [i_0 + 1] [i_1])))) << ((((~(((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned short)14715)) : (((/* implicit */int) (signed char)14)))))) + (14722)))));
                arr_10 [i_0 + 1] [i_0] = ((/* implicit */int) arr_0 [i_0]);
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_18 [i_0] = var_5;
                                var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_5)), ((+(-6485739596941831354LL)))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_8))));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_0 + 2]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)25748)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18333))) : (12704103853157844538ULL)));
                            arr_25 [(short)2] [i_0] [(short)6] [i_6] = (i_0 % 2 == zero) ? (((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))) : (var_8))) >> (((((/* implicit */int) arr_24 [i_0] [i_1] [i_5] [i_6])) + (116))))) << (((((((/* implicit */long long int) ((/* implicit */int) arr_23 [9LL] [1LL] [1LL] [9LL] [i_0]))) ^ (((var_10) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))) + (5344LL))))) : (((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))) : (var_8))) >> (((((((/* implicit */int) arr_24 [i_0] [i_1] [i_5] [i_6])) + (116))) - (136))))) << (((((((/* implicit */long long int) ((/* implicit */int) arr_23 [9LL] [1LL] [1LL] [9LL] [i_0]))) ^ (((var_10) & (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))) + (5344LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        for (short i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) var_9);
                    arr_32 [i_7] [i_8] [(unsigned short)15] = ((/* implicit */long long int) (short)-11323);
                }
                arr_33 [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                /* LoopSeq 1 */
                for (unsigned short i_10 = 3; i_10 < 15; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 15; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 4; i_12 < 13; i_12 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((((/* implicit */int) arr_28 [i_7] [i_10 + 1] [i_11])) << (((/* implicit */int) arr_37 [i_10 - 2] [i_7])))) | (((/* implicit */int) (_Bool)1))));
                                var_22 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)220))))))) ? (((unsigned long long int) arr_41 [i_7] [i_8] [i_7] [15LL] [i_8] [i_7])) : (((/* implicit */unsigned long long int) min((arr_39 [i_10 - 3] [i_11 + 1] [i_7] [i_10 - 3] [i_12 - 1]), ((((_Bool)1) ? (arr_34 [i_7] [i_11 + 1] [(unsigned char)9]) : (((/* implicit */int) arr_28 [i_8] [i_8] [(unsigned char)2])))))))));
                                var_23 = ((/* implicit */unsigned int) min((arr_30 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned short) arr_29 [i_7]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        arr_45 [i_7] [i_7] [(unsigned char)11] [i_7] [13ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_7])) | (((/* implicit */int) var_9))))) ? (((/* implicit */int) max((arr_42 [i_13] [(unsigned short)7] [i_8] [i_8] [i_7] [i_7] [i_7]), (arr_38 [i_7] [i_8] [i_8] [i_10 - 2] [i_13])))) : (((/* implicit */int) min((arr_40 [i_13 - 1] [i_8] [i_13 - 1] [i_10 + 1] [i_13]), (arr_40 [i_7] [i_8] [i_13 - 1] [i_10 + 1] [i_7]))))));
                        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)34474), (((/* implicit */unsigned short) var_7)))))) : (((((/* implicit */_Bool) (unsigned short)20498)) ? (5687827994807673509ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))))))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_0), (((/* implicit */short) arr_38 [i_13 - 1] [i_13 - 1] [i_10 + 1] [i_8] [(short)2]))))))))));
                        arr_46 [i_7] [i_10 - 1] [(unsigned short)1] = ((/* implicit */unsigned long long int) var_3);
                        var_25 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_7] [i_8] [i_13])) ? (var_11) : (((/* implicit */int) var_4))))))) && (((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */short) arr_28 [i_7] [i_10] [i_13])), (var_0)))), (((((/* implicit */int) var_2)) | (((/* implicit */int) arr_44 [i_7] [i_7] [i_7] [i_7] [i_10 - 2]))))))));
                    }
                    for (short i_14 = 3; i_14 < 15; i_14 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [9LL] [i_8] [i_8] [i_8] [14ULL]))))) || (((/* implicit */_Bool) 4251048742U))));
                        arr_49 [i_7] [i_10 - 2] [i_8] [i_7] = (((~(((((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_7] [i_7] [i_7] [i_7] [i_7] [i_14 + 1] [i_8]))) : (var_8))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_7] [i_8] [i_14 + 1] [i_7] [i_14])))))));
                        var_27 *= ((/* implicit */_Bool) arr_26 [i_8]);
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_7] [i_7] [i_7] [(_Bool)1] [i_10] [i_14]))) : (((arr_42 [i_7] [(_Bool)1] [i_10 - 3] [i_7] [i_7] [i_14 - 3] [i_7]) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_7] [i_10 - 1] [i_14 - 1])))))));
                    }
                    var_29 -= ((/* implicit */unsigned long long int) (-(((int) max((((/* implicit */short) arr_28 [i_8] [i_8] [i_10])), (var_0))))));
                }
                var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_7] [i_7] [i_7] [i_7] [(short)15])) + (((/* implicit */int) arr_36 [i_7] [i_7]))));
            }
        } 
    } 
}
