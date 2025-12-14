/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99657
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
    for (short i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [(short)4] [i_0 + 2])) ? (min((arr_3 [(short)9] [0ULL]), (((/* implicit */unsigned long long int) (signed char)-47)))) : (arr_3 [i_0 + 3] [i_0 + 1])))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0]))))), (((((/* implicit */_Bool) var_0)) ? (71199467U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16)))))))) ? (((/* implicit */int) ((arr_2 [i_0 - 2] [i_0 + 3]) == (arr_2 [i_0] [i_1])))) : (arr_2 [i_0 - 1] [i_1])));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) * (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_10))))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-6)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_6))))))))));
    var_14 = ((/* implicit */long long int) ((var_2) <= (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
    /* LoopSeq 4 */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        arr_7 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-102)) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (arr_2 [i_2] [i_2]) : (((/* implicit */int) (signed char)-3)))) : (((/* implicit */int) arr_6 [i_2] [i_2]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max(((unsigned short)28403), (((unsigned short) 1182554086)))))));
        var_15 = min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-1)), ((unsigned short)14727)))), ((+(var_0))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            arr_10 [i_2] [i_3] [2] = ((/* implicit */signed char) (-(((var_6) / (((/* implicit */int) (unsigned short)50837))))));
            var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)14709))))), ((((+(arr_3 [i_2] [i_3]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
        }
        for (unsigned short i_4 = 2; i_4 < 8; i_4 += 4) 
        {
            var_17 = ((((/* implicit */_Bool) (+(((/* implicit */int) min(((signed char)-21), ((signed char)65))))))) ? ((~(68719476735LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)50833)), (arr_3 [i_2] [(signed char)9])))) ? (((int) var_0)) : (var_9)))));
            var_18 += ((/* implicit */unsigned int) arr_4 [i_2] [(unsigned char)3]);
        }
    }
    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)13198)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)-113)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(signed char)6] [i_5]))))))))));
        var_20 = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 745248561)) / (var_1)))), (arr_16 [i_5] [i_5]))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 2; i_6 < 8; i_6 += 1) 
        {
            var_21 |= ((/* implicit */long long int) (~(((unsigned int) ((((/* implicit */_Bool) arr_19 [(unsigned short)4])) ? (((/* implicit */long long int) var_2)) : (arr_14 [i_6]))))));
            var_22 = ((/* implicit */unsigned short) ((unsigned int) max((((short) arr_15 [i_5])), (((/* implicit */short) (!(((/* implicit */_Bool) arr_14 [i_6]))))))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((short)12288), (((/* implicit */short) (signed char)-17))))) ? (min((((/* implicit */unsigned long long int) var_8)), (arr_17 [i_5] [i_6 - 2]))) : (((/* implicit */unsigned long long int) ((long long int) arr_14 [i_6])))));
        }
    }
    for (signed char i_7 = 3; i_7 < 14; i_7 += 3) 
    {
        var_24 = ((/* implicit */signed char) 6U);
        var_25 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_20 [i_7] [i_7 - 1])), (((((/* implicit */int) min((((/* implicit */unsigned char) arr_22 [i_7])), (arr_21 [i_7])))) | (((/* implicit */int) arr_22 [i_7]))))));
        var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) 536870911U)) ? (((-1619431884) | (((/* implicit */int) (unsigned char)8)))) : ((-(((/* implicit */int) arr_20 [i_7] [i_7])))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */int) arr_20 [i_7] [i_7])) : (((/* implicit */int) arr_21 [i_7]))))))))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        arr_27 [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
        var_27 = (signed char)-48;
        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_25 [i_8] [i_8])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_8] [i_8]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50792))) / (1971507532U))));
        var_29 = ((signed char) (+(var_8)));
    }
}
