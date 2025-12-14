/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55735
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
    var_19 = ((/* implicit */int) ((long long int) ((signed char) ((((/* implicit */_Bool) var_13)) ? (-3169881454507538034LL) : (2442893677400784624LL)))));
    var_20 = ((/* implicit */int) min((-5753428311071979504LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_6)))))))));
    var_21 = ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [3] = ((/* implicit */int) ((unsigned long long int) (-(((long long int) arr_5 [i_0] [12LL] [(signed char)5] [15])))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_10 [9LL] [i_1] [1LL] = ((/* implicit */int) arr_0 [6]);
                        arr_11 [i_3] [14LL] = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) 4476271392140215044ULL)) ? (4476271392140215036ULL) : (((/* implicit */unsigned long long int) arr_3 [5] [6] [i_2])))), (max((arr_8 [6] [16LL] [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_6 [8] [8LL] [i_0])))))), (((/* implicit */unsigned long long int) max((((long long int) var_5)), (((/* implicit */long long int) arr_2 [7] [0] [13ULL])))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        for (int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                {
                    arr_19 [i_4] = min(((+(arr_16 [i_4]))), (((long long int) arr_17 [i_4] [4ULL])));
                    arr_20 [i_6] = ((((/* implicit */_Bool) max(((~(arr_15 [i_6] [i_6]))), (max((arr_13 [(signed char)5] [19]), (4476271392140215044ULL)))))) ? ((-(((((/* implicit */_Bool) var_6)) ? (arr_17 [i_6] [i_4]) : (arr_17 [i_6] [12LL]))))) : (((/* implicit */long long int) ((int) max((arr_18 [i_5] [i_6]), (7416265808118441754LL))))));
                    arr_21 [6] [i_6] = ((/* implicit */unsigned long long int) max(((~(arr_17 [i_6] [18ULL]))), ((-(min((arr_12 [i_6]), (2767818150932036053LL)))))));
                    arr_22 [i_4] [i_5] [8ULL] = min((arr_16 [i_5]), (((/* implicit */long long int) max((min((arr_14 [(signed char)18] [12LL]), (((/* implicit */int) (signed char)-12)))), (var_8)))));
                }
            } 
        } 
    } 
}
