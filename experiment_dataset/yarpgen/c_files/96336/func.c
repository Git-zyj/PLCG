/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96336
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_6) << (((/* implicit */int) var_10)))) & (((int) 2147483647))))) || ((!(((/* implicit */_Bool) ((int) var_7)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) (-(min((((/* implicit */long long int) ((int) var_10))), (((long long int) var_7))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_9), (var_0)))) || (((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_16))))) == (((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
                        var_18 &= ((/* implicit */unsigned int) (!(((((/* implicit */int) ((short) var_10))) < (((((/* implicit */int) var_13)) - (((/* implicit */int) var_12))))))));
                        var_19 = ((/* implicit */long long int) ((unsigned char) (-(var_15))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            arr_15 [i_0] [i_4] [i_4] [7LL] [(signed char)8] = ((/* implicit */long long int) (~(var_6)));
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((unsigned short) ((_Bool) var_3))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            arr_18 [i_5] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) var_5);
                            arr_19 [i_0] [i_5] [(_Bool)0] [i_3] [i_5] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) ((int) (-2147483647 - 1)))))), (((_Bool) var_4))));
                        }
                        arr_20 [i_2] [i_1] [i_0 + 1] = (((-(((/* implicit */int) (short)12007)))) | ((+(((/* implicit */int) var_10)))));
                    }
                    arr_21 [i_2] [i_2] = ((/* implicit */short) ((signed char) ((unsigned short) ((var_6) + (((/* implicit */int) var_13))))));
                }
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        arr_24 [i_6] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) - (((long long int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_3)))))));
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_8)), (((var_14) ^ (((/* implicit */long long int) ((/* implicit */int) var_0))))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((var_11), (var_1))))) != ((~(var_15)))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_28 [2ULL] &= (((+(-1289843264))) / (1289843245));
        /* LoopNest 2 */
        for (signed char i_8 = 1; i_8 < 9; i_8 += 4) 
        {
            for (signed char i_9 = 2; i_9 < 10; i_9 += 2) 
            {
                {
                    arr_34 [i_7] [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_7))))) * (((var_6) & (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_13))))))));
                    arr_35 [6LL] [i_7] [i_9] = ((((((/* implicit */long long int) (+(((/* implicit */int) var_11))))) - (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_15))))) + (((/* implicit */long long int) (+(((((/* implicit */int) var_5)) - (((/* implicit */int) var_10))))))));
                }
            } 
        } 
        arr_36 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -1289843245)) * (((unsigned long long int) ((_Bool) 6198891853560736017ULL)))));
        arr_37 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_1))))) && ((!(((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_3))))))));
    }
    var_21 = ((/* implicit */int) var_2);
    var_22 = ((/* implicit */long long int) ((unsigned char) ((_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_1))))));
    var_23 = ((/* implicit */_Bool) ((int) ((max((2147483647), (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_10)))))));
}
