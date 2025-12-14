/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55932
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
    var_18 += ((/* implicit */unsigned char) var_6);
    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((((/* implicit */int) var_10)) == (((/* implicit */int) (unsigned char)153)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_2 [i_0])))) ? (25800340) : (16820803))), (((/* implicit */int) ((175793550) != (((/* implicit */int) (signed char)102)))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_0 [i_1] [i_0]))) <= (min((((/* implicit */int) arr_4 [i_0])), ((+(633742424)))))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_1])))) && (((/* implicit */_Bool) 633742424))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (short i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            {
                var_22 += ((/* implicit */int) (unsigned char)210);
                var_23 &= ((/* implicit */unsigned short) ((((arr_7 [i_3 + 2] [i_3 + 2]) < (arr_7 [i_3 + 1] [i_3 + 1]))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [3ULL] [(unsigned short)2] [i_2])) : (arr_7 [(unsigned short)7] [i_2])))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 + 1] [9]))) : (15594401084071418989ULL))))) : (((/* implicit */unsigned long long int) 633742428))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                {
                    arr_18 [(_Bool)1] [i_5] [(_Bool)1] [(unsigned char)4] &= ((/* implicit */unsigned long long int) arr_1 [(_Bool)1]);
                    var_24 += ((/* implicit */signed char) (+(min((var_17), (((/* implicit */unsigned long long int) arr_15 [i_4] [i_5] [i_5] [8]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            {
                                arr_26 [i_4] [0ULL] [1] [i_4] [i_5] [0ULL] = arr_10 [i_6] [10ULL];
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) max((-633742452), (((/* implicit */int) (unsigned short)65526))))) : (18446744073709551597ULL))))))));
                            }
                        } 
                    } 
                    var_26 = (signed char)109;
                }
            } 
        } 
    } 
}
