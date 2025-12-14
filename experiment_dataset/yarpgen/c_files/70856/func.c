/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70856
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((int) ((((/* implicit */int) arr_5 [3LL])) / ((-(((/* implicit */int) arr_0 [i_1])))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((unsigned int) (signed char)107)) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_0])))))))) ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : (arr_6 [i_0] [i_0] [i_1] [i_1])));
                    arr_8 [i_0] [i_1] [14ULL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) max((((short) var_6)), (((/* implicit */short) arr_5 [i_0])))))));
                    arr_9 [15ULL] [15ULL] [i_2] = ((/* implicit */short) ((((((/* implicit */int) var_7)) + (((/* implicit */int) (signed char)-115)))) ^ (max((arr_6 [i_1] [i_1] [i_1] [i_1]), (arr_6 [2] [i_2] [2] [i_0])))));
                    var_16 = ((/* implicit */short) var_6);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 2 */
    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        arr_13 [i_3] = (i_3 % 2 == 0) ? (((/* implicit */unsigned char) ((((var_1) << (((arr_12 [i_3] [i_3]) + (7360514307216665031LL))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_12 [i_3] [i_3]))))))) : (((/* implicit */unsigned char) ((((var_1) << (((((arr_12 [i_3] [i_3]) + (7360514307216665031LL))) - (4574623904228175272LL))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_12 [i_3] [i_3])))))));
        var_18 &= ((/* implicit */signed char) ((short) ((((((/* implicit */int) (signed char)115)) > (((/* implicit */int) (short)-24643)))) ? (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (arr_11 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_3] [i_3]))))))));
    }
    for (int i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        var_19 = ((/* implicit */int) (-(((var_5) % (((((/* implicit */_Bool) (short)29171)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-7659606440200207984LL)))))));
        var_20 = ((/* implicit */signed char) arr_15 [i_4] [i_4]);
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            {
                var_21 = ((/* implicit */short) ((unsigned long long int) max((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned short) arr_1 [i_5]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6]))) + (arr_14 [i_5]))))));
                var_22 = ((/* implicit */unsigned char) var_12);
                arr_22 [i_5] [i_6] [i_5] = ((/* implicit */long long int) (-(max((((/* implicit */int) min((((/* implicit */unsigned short) (short)255)), (arr_16 [i_5])))), ((-(((/* implicit */int) var_3))))))));
            }
        } 
    } 
}
