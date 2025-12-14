/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72304
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_10)))))) ? (min(((+(4826296936907349099LL))), (max((-4826296936907349100LL), (-4826296936907349100LL))))) : (4826296936907349117LL))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((long long int) min((1410885524419643762LL), (((/* implicit */long long int) arr_2 [(unsigned char)13] [(unsigned char)13]))))), (-4826296936907349099LL))))));
        arr_3 [(unsigned short)10] [i_0] = ((/* implicit */int) arr_2 [i_0] [i_0]);
        var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4826296936907349099LL)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_2 [(signed char)1] [i_0]))))), (((unsigned long long int) var_9)))))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_20 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1] [(unsigned short)4])) ^ (((/* implicit */int) var_13))))) > (((unsigned int) var_5)))))));
        arr_6 [15ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)108))) ^ (4826296936907349099LL))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) & (4826296936907349099LL))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) var_13);
    }
    for (long long int i_2 = 0; i_2 < 17; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            var_21 = ((/* implicit */signed char) 0);
            var_22 &= ((/* implicit */signed char) arr_0 [i_3] [i_3]);
        }
        for (signed char i_4 = 1; i_4 < 15; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 15; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    {
                        arr_20 [i_6] [i_2] [i_2] [(unsigned short)2] = ((/* implicit */long long int) min((((int) arr_14 [i_2] [i_2])), (((int) arr_14 [i_2] [i_5]))));
                        arr_21 [i_2] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_9 [i_2])), (((((((/* implicit */unsigned int) 3)) >= (268435328U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */unsigned int) arr_4 [i_2])) | (arr_0 [i_2] [i_2])))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
            var_24 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_13 [i_4] [i_2])), (arr_1 [i_2])));
        }
        /* LoopNest 3 */
        for (signed char i_7 = 4; i_7 < 15; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    {
                        var_25 -= ((/* implicit */unsigned char) (~(((unsigned int) arr_11 [i_7 + 2] [(signed char)3]))));
                        arr_28 [8] [(unsigned short)11] [i_2] = ((/* implicit */_Bool) 4826296936907349100LL);
                        arr_29 [i_9] [i_2] [i_8] [i_2] [(signed char)13] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((signed char) ((signed char) arr_1 [i_9])))), (((((arr_1 [i_8]) <= (((/* implicit */long long int) ((/* implicit */int) arr_27 [12ULL] [i_7]))))) ? (arr_22 [i_7 - 3] [i_7 - 2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_7 - 4] [i_7 + 2])))))));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9)))) != ((+(var_12))))))));
}
