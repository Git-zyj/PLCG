/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93079
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
    var_11 = ((/* implicit */short) max((((/* implicit */int) var_6)), (min((((((/* implicit */_Bool) 999631137U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_1)) : (-1687658444)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */long long int) ((_Bool) var_9))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_5))))));
                    arr_9 [i_0] = ((/* implicit */int) min((((unsigned short) (_Bool)1)), (((/* implicit */unsigned short) var_9))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) (unsigned char)137);
                                arr_16 [i_0] = ((/* implicit */short) 1687658444);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 2; i_5 < 14; i_5 += 2) 
    {
        for (unsigned int i_6 = 1; i_6 < 12; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 14; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        {
                            arr_27 [i_5] [i_6] [i_5] [i_5] [i_8] = ((/* implicit */unsigned long long int) ((long long int) min((var_9), (var_6))));
                            arr_28 [i_5] [7] [i_7] [i_8] [i_8] = ((/* implicit */unsigned long long int) 1330802936);
                            var_13 = ((/* implicit */unsigned short) ((((_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_6))));
                            arr_29 [5ULL] [5ULL] [(unsigned short)6] [7LL] [i_5] [i_5] = ((/* implicit */long long int) ((unsigned char) var_8));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_10)), ((short)-18141)))) ? (((/* implicit */int) ((unsigned short) -4029810995049988263LL))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)65514))))))) : (((((/* implicit */_Bool) (unsigned short)12667)) ? (((/* implicit */long long int) -2135499424)) : (var_5))))))));
                var_15 = ((/* implicit */unsigned long long int) var_8);
                arr_30 [i_5 - 2] = var_8;
            }
        } 
    } 
}
