/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59150
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
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */short) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (var_4) : (((/* implicit */int) var_1))))))), (((((/* implicit */int) arr_2 [i_0] [i_0] [(signed char)0])) != (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (arr_0 [i_0]))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) min((var_16), ((-(min((((/* implicit */long long int) (_Bool)1)), (-2624489666714563558LL)))))));
                            var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (max((4294967285U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4194303LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)9))))))));
                            var_18 = ((/* implicit */long long int) (~((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))))));
                            arr_11 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) - (((((/* implicit */int) var_9)) & (((/* implicit */int) arr_3 [i_2]))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 3; i_4 < 13; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_6 = 1; i_6 < 12; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned short) arr_17 [i_4]);
                                arr_27 [i_4 - 2] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))) == (315957601711743496ULL)))), (min((arr_0 [i_4 - 1]), (arr_26 [i_4] [i_5] [i_5] [(_Bool)1] [i_7 + 1] [i_8]))))))));
                                arr_28 [i_4 + 1] [i_4 + 1] [i_6 + 2] [i_7] [i_8] [i_6] [i_4] = (!(var_12));
                                arr_29 [(signed char)13] [i_5] [(_Bool)1] [i_7] [6LL] = ((/* implicit */int) var_12);
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_25 [i_4 - 2] [i_4 - 3] [i_4] [i_4 - 2] [i_4])) | (((/* implicit */int) arr_8 [i_4 + 1] [i_4 - 3])))), ((~(((/* implicit */int) (short)11627))))));
            }
        } 
    } 
}
