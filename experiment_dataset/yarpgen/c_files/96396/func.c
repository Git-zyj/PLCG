/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96396
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
                var_13 = max((var_10), (((unsigned short) arr_4 [0LL] [i_0] [i_1])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned short i_5 = 3; i_5 < 19; i_5 += 4) 
                    {
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_5] = var_4;
                            arr_20 [i_2] [i_3] [i_4] [i_5] = ((18446744073709551591ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_8 [(signed char)17])))) && (((/* implicit */_Bool) var_12)))))));
                            arr_21 [i_3] = ((/* implicit */unsigned long long int) var_9);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 16; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        for (long long int i_8 = 4; i_8 < 19; i_8 += 4) 
                        {
                            {
                                arr_30 [i_8 - 3] = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24419)) ^ (arr_6 [i_8])))), (281474976710655ULL))));
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_6))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (unsigned char i_10 = 3; i_10 < 18; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            {
                                arr_38 [i_2] [i_3] [i_10] [i_11] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41117))) & (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_2] [i_2] [(unsigned char)16] [6ULL] [i_10 + 1] [i_2] [i_11]))) ^ (4891461026936177932ULL))) - (13555283046773390126ULL)))))));
                                var_15 -= ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (13973156996693651404ULL))), (((/* implicit */unsigned long long int) ((int) arr_29 [i_2] [i_3] [i_9] [i_10] [i_11])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4)) & (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) max((arr_32 [i_11] [i_3] [i_3] [i_2]), (((/* implicit */int) arr_33 [i_2] [i_2] [i_2]))))) ? (4100845281506032554ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_8);
    var_17 -= var_12;
}
