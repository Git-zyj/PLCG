/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65747
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) max((((max((((/* implicit */unsigned long long int) 568383571U)), (1314011758277344305ULL))) << (((((568383571U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86))))) - (2658620421U))))), (((/* implicit */unsigned long long int) min((((arr_3 [i_0]) / (568383571U))), (((/* implicit */unsigned int) var_10)))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                            {
                                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (-(arr_2 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) (-(var_7)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50253))) / (var_6))))))));
                                arr_15 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (var_8))))));
                                var_14 = ((/* implicit */unsigned char) ((arr_13 [i_3] [i_3] [i_3] [i_3 + 3] [i_3] [i_3 + 3]) | (((((/* implicit */_Bool) var_10)) ? (var_5) : (2146959360U)))));
                                var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) var_1)) : (var_6))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(unsigned char)13] [i_3 + 3] [i_3] [(signed char)7] [i_3 + 3])))));
                            }
                            arr_16 [i_1] = min((((((/* implicit */_Bool) arr_8 [i_0] [i_3 + 1] [i_2] [2U])) ? (arr_8 [i_0] [i_3 + 3] [i_2] [19LL]) : (((/* implicit */int) var_10)))), ((+(var_11))));
                        }
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 568383584U)) - (var_6))))));
                var_16 = ((/* implicit */int) ((((((((/* implicit */_Bool) (unsigned char)249)) ? (3726583743U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) <= (arr_1 [i_1] [(unsigned char)12]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) + (min((arr_9 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) (unsigned char)64)))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (unsigned short)45002)) : (((/* implicit */int) (unsigned short)15283)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)193)) != (934334615)))))))));
                /* LoopNest 3 */
                for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 18; i_7 += 1) 
                        {
                            {
                                arr_26 [i_0] [i_1] = ((/* implicit */unsigned char) ((max((3110644212U), (((/* implicit */unsigned int) (unsigned char)191)))) - ((((-(3726583712U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (~(arr_4 [i_0] [i_0])))) && (((/* implicit */_Bool) var_10))))) >> ((((+(max((((/* implicit */int) (_Bool)1)), (682474527))))) - (682474513)))));
                            }
                        } 
                    } 
                } 
                arr_27 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_11 [i_1] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        for (unsigned short i_9 = 1; i_9 < 13; i_9 += 1) 
        {
            {
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((((/* implicit */unsigned int) 934334631)), (arr_1 [i_8] [i_9 + 3]))))));
                var_19 = ((/* implicit */long long int) (~(((((/* implicit */int) (unsigned short)50275)) ^ (arr_2 [i_8] [i_9 + 1])))));
            }
        } 
    } 
    var_20 += (~((((~(((/* implicit */int) var_10)))) ^ (var_0))));
}
