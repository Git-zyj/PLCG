/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95995
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
    var_13 = max((((/* implicit */unsigned int) (unsigned char)65)), (((((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)-47)))) % ((~(var_0))))));
    var_14 = ((/* implicit */_Bool) (unsigned char)215);
    var_15 = ((/* implicit */int) (+((+(var_1)))));
    var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-96)), ((unsigned char)0))))))), (((((/* implicit */_Bool) (unsigned char)191)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) ((((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [5]))))) ? ((-(arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)181)) ? (arr_2 [i_1]) : (arr_2 [i_0]))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                var_18 += ((/* implicit */unsigned int) (~(arr_6 [i_0 - 1] [i_2] [i_2] [i_2])));
                arr_9 [i_0] [i_0] [i_0] = (((_Bool)1) ? (2532881639U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26492))));
            }
        }
    }
    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 16; i_4 += 4) 
        {
            var_19 &= ((/* implicit */short) min((((((/* implicit */_Bool) (-(var_12)))) ? ((~(3207790173U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_13 [(signed char)11]) : (((/* implicit */int) arr_8 [i_3] [i_4] [i_4 + 1]))))) >= (arr_2 [i_3 + 2]))))));
            arr_15 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) * (((/* implicit */int) (!(arr_8 [i_3] [5LL] [i_3]))))));
        }
        var_20 = ((/* implicit */unsigned long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)0))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((max((((/* implicit */long long int) (unsigned char)149)), (arr_14 [i_3] [i_3]))) >> ((((~(((/* implicit */int) (_Bool)1)))) + (6))))) | (((/* implicit */long long int) ((/* implicit */int) arr_10 [15U]))))))));
        arr_16 [i_3] [i_3] = ((/* implicit */short) arr_8 [i_3] [11ULL] [i_3 - 2]);
    }
    for (unsigned short i_5 = 2; i_5 < 17; i_5 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) (((~((+(((/* implicit */int) var_10)))))) & (((((/* implicit */_Bool) (-(-1970533575)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-96))))));
        arr_19 [i_5] = ((/* implicit */unsigned char) ((var_2) ^ (((/* implicit */long long int) (-(min((3577214112U), (((/* implicit */unsigned int) (_Bool)1)))))))));
        arr_20 [(_Bool)1] = arr_13 [i_5];
    }
}
