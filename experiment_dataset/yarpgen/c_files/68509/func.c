/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68509
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */int) arr_1 [(signed char)8])) : (((/* implicit */int) ((unsigned short) arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [(unsigned char)0])) : (((/* implicit */int) (signed char)-32))))) && (((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((((/* implicit */_Bool) 5067035778977382423ULL)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (unsigned short)850)))) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_10 [(signed char)8] [i_2] [i_3] = ((/* implicit */unsigned int) min(((+(min((((/* implicit */long long int) 0U)), (arr_3 [17U]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)458)) << (((((/* implicit */int) (short)-459)) + (481)))))) || ((_Bool)1))))));
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (var_0))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)12))))), (arr_3 [(signed char)5]))))));
                }
            } 
        } 
        arr_11 [(unsigned short)18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)28)) ? (arr_6 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1])))));
    }
    var_15 = max((((/* implicit */long long int) ((var_1) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)-32)))))))), (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_1))), (min((((/* implicit */long long int) (signed char)-46)), (3588695464344874676LL))))));
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        for (short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                {
                    arr_20 [i_4] [i_5] [i_6] [i_6] = ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((((/* implicit */int) (signed char)32)) > (((/* implicit */int) (unsigned short)13503))))))) ? (max((((/* implicit */int) var_9)), (((((/* implicit */int) arr_18 [18U])) & (-1816871816))))) : (((/* implicit */int) max(((unsigned short)13512), (((/* implicit */unsigned short) ((short) arr_12 [11U])))))));
                    var_16 += ((((/* implicit */int) ((((/* implicit */int) (signed char)-4)) > ((-(((/* implicit */int) (_Bool)1))))))) | (((/* implicit */int) min(((unsigned short)56361), (((/* implicit */unsigned short) (short)-459))))));
                }
            } 
        } 
    } 
}
