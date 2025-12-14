/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94717
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3] [i_1] [i_3])) || (((/* implicit */_Bool) (unsigned char)88)))))) < ((+((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_2] [i_3]))) : (4498721730348439849ULL))))))))));
                                arr_12 [i_1] [i_0] [(short)16] = arr_6 [i_3];
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0] [i_0]);
                var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [(unsigned short)2] [i_1] [i_1])) + (2147483647))) >> (((((/* implicit */int) (unsigned char)119)) - (97)))))) ? (min((min((arr_10 [i_0] [17U] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) != ((-(((/* implicit */int) (short)-19524))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                {
                    var_18 += 2107258066162524885ULL;
                    var_19 = ((/* implicit */long long int) ((unsigned short) max(((+(16339486007547026731ULL))), (((/* implicit */unsigned long long int) arr_11 [i_7] [i_5])))));
                    var_20 = (short)-18581;
                    var_21 = ((/* implicit */signed char) var_5);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((4498721730348439849ULL) ^ (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_6)), (3279823359694183652LL))), (((/* implicit */long long int) ((var_12) < (var_5)))))))));
    var_23 ^= ((/* implicit */unsigned char) min((((/* implicit */int) (short)-25412)), (var_5)));
    /* LoopSeq 2 */
    for (int i_8 = 1; i_8 < 13; i_8 += 1) /* same iter space */
    {
        var_24 &= ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned long long int) (unsigned short)3)), (max((arr_2 [i_8] [i_8]), (((/* implicit */unsigned long long int) (unsigned char)166)))))) : (max((((/* implicit */unsigned long long int) arr_11 [i_8] [i_8 + 1])), (max((var_3), (((/* implicit */unsigned long long int) (unsigned char)156))))))));
        var_26 = (~(((/* implicit */int) arr_8 [i_8 + 1] [i_8 - 1] [i_8 + 1])));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 13; i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) arr_5 [i_9] [i_9] [i_11]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 2; i_12 < 12; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 13; i_13 += 4) 
                        {
                            {
                                var_28 = var_6;
                                var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)15587))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_14 = 2; i_14 < 13; i_14 += 4) 
        {
            arr_41 [i_9] [i_9] = (+(((((/* implicit */_Bool) (unsigned char)166)) ? (20ULL) : (arr_10 [i_9] [i_9] [i_9] [i_14] [6]))));
            var_30 = var_0;
        }
        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_9])) | (((arr_34 [12ULL] [i_9 - 1] [4] [(unsigned char)4] [i_9] [i_9]) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_13)))))))));
    }
}
