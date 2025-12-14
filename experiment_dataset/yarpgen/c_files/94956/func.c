/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94956
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 6; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_14 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_4 [8LL] [i_1])) ? (8032721315794107134LL) : (-8032721315794107148LL))))) < (-665513993)));
                                arr_16 [0LL] [i_3] [i_3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 15LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-8032721315794107135LL))) | (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_0] [i_1]))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_3 [1ULL] [i_1]))));
                    arr_17 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) max((((int) 16408420923340555043ULL)), (((int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_5 [3LL] [3LL] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)9]))))))));
                    arr_18 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(short)5])) ? (((/* implicit */int) (unsigned short)16352)) : (((/* implicit */int) (short)18741))))) >= (((((/* implicit */_Bool) 1574414932)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_11)))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_2])))))) : (((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_8 [i_0] [i_1]))) != (((/* implicit */int) arr_1 [i_0])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((unsigned short) var_7))) : (((int) var_12)))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((signed char) 16408420923340555043ULL)))));
    var_18 = ((/* implicit */int) var_1);
}
