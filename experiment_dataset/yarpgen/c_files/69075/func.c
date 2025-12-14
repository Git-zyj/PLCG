/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69075
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((8988657638309055316LL) << (((((arr_3 [i_0]) + (6826948743476532282LL))) - (28LL))))) ^ (((/* implicit */long long int) (-(var_2))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_11 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (3063254920130572156LL)));
                    var_19 -= (~(arr_0 [i_1 - 1] [i_1 + 1]));
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) ((-8988657638309055300LL) != (((/* implicit */long long int) ((/* implicit */int) var_14)))));
        var_21 = (!(((/* implicit */_Bool) var_5)));
        var_22 = (+(arr_3 [i_0]));
    }
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_4 = 2; i_4 < 22; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    {
                        var_23 = ((/* implicit */short) arr_6 [i_4] [i_4 - 2] [i_4 - 2]);
                        arr_22 [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 12134295869577283180ULL)))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */short) (-(max(((+(((/* implicit */int) var_4)))), (((/* implicit */int) (signed char)101))))));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 24; i_7 += 4) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    {
                        arr_33 [i_3] [(unsigned char)1] [2LL] [i_7 - 1] [i_8] [i_7 - 1] = ((((/* implicit */_Bool) (-(arr_21 [i_8] [i_7 - 1] [(signed char)11] [i_7] [i_7])))) ? (max((arr_21 [(short)0] [i_7 + 1] [i_7] [i_7] [i_7 + 1]), (((/* implicit */unsigned long long int) var_8)))) : (min((((/* implicit */unsigned long long int) var_14)), (arr_21 [i_7] [i_7 + 1] [i_7 + 1] [i_7] [11U]))));
                        arr_34 [i_3] [9] [i_8] [(_Bool)0] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_3] [i_7 - 1] [i_3] [i_7 - 1] [i_3] [i_3]))))) > (((((/* implicit */int) var_17)) & (((/* implicit */int) arr_1 [i_8])))))))));
                        var_25 = ((/* implicit */long long int) min((var_16), (((/* implicit */int) var_4))));
                        arr_35 [i_3] [i_8] [i_8] [i_3] = ((/* implicit */unsigned char) (~(min(((~(((/* implicit */int) arr_1 [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_7] [i_9])))))))));
                    }
                } 
            } 
        } 
    }
    var_26 &= ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_10))))) : (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_15))), (((/* implicit */long long int) max(((signed char)-107), (var_18))))))));
    var_27 = ((/* implicit */int) min((var_0), (((/* implicit */unsigned long long int) var_14))));
}
