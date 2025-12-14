/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75673
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [(unsigned short)15]))))) : (((/* implicit */int) min((arr_10 [i_0]), (arr_10 [i_1]))))));
                    var_11 &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_12 -= ((/* implicit */long long int) -246629084);
                                arr_16 [i_0] [i_0] [i_4] [(signed char)7] [i_4] [i_2] [i_2] = min((((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 - 1] [i_3] [i_3 + 1])) ? (((/* implicit */long long int) 246629105)) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) -1250195745)) : ((((_Bool)1) ? (max((((/* implicit */long long int) 246629083)), (4726051629063318378LL))) : (((/* implicit */long long int) var_3))))));
    /* LoopNest 2 */
    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)-2))))))) ? (max((arr_25 [i_8] [i_8] [i_8] [6]), (arr_27 [i_6] [i_7] [i_6] [i_5] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216)))));
                            arr_28 [0LL] [i_7] [i_7] [i_7] [i_7] [i_5 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_12 [i_5 - 2] [i_5] [i_5 - 1])))) ? (((((/* implicit */_Bool) min((arr_27 [i_6] [(signed char)5] [(unsigned char)9] [i_6] [i_6]), (((/* implicit */long long int) -246629074))))) ? (8135935298183671081LL) : (arr_25 [i_6] [i_7] [i_7] [i_6]))) : (((/* implicit */long long int) min((arr_19 [i_5 + 1] [i_7]), (arr_19 [i_5 - 2] [i_5 - 2]))))));
                        }
                    } 
                } 
                var_15 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) 4726051629063318378LL))));
                /* LoopNest 3 */
                for (signed char i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            {
                                var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [16LL] [i_9] [i_11])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_5] [i_5] [i_5 - 2] [i_5 - 2]))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_10 [i_5 - 1])), ((unsigned short)31625)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_5] [i_6] [i_9] [i_10]))) : (min((4999843063437137135LL), (((/* implicit */long long int) arr_30 [(signed char)11] [i_9] [i_9] [i_11]))))))));
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(246629102)))) ? (-2931197284150280545LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2893148998U)) ? (((/* implicit */int) arr_26 [i_5] [i_5] [i_6] [i_9] [i_9] [i_11])) : (((/* implicit */int) (unsigned short)3097)))))))) ? (((((/* implicit */_Bool) arr_4 [i_5 - 1])) ? (min((-6975845732252251255LL), (arr_7 [i_5 - 1] [i_5 - 1] [(signed char)5]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_5]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5 - 1] [i_6] [2LL] [(unsigned char)19])) ? (10071923565800873613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [(short)1] [(short)1] [i_9] [(short)1] [i_11])))))) ? ((-(((/* implicit */int) arr_35 [i_11] [i_10] [i_5] [i_5])))) : (min((-246629106), (-729813063))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
