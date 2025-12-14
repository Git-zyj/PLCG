/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82849
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
        for (signed char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 6203357669867628666ULL)) ? (((/* implicit */unsigned long long int) arr_0 [(signed char)1])) : (var_9)))))));
                arr_5 [i_0] [i_0] = min((((/* implicit */unsigned char) ((arr_0 [i_1 - 1]) >= (arr_0 [i_1 + 1])))), ((unsigned char)5));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_18))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) -1275877520))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)12288)) ? (6203357669867628666ULL) : (6203357669867628666ULL)))))) : (min((((/* implicit */unsigned int) 170837820)), (min((((/* implicit */unsigned int) (_Bool)0)), (arr_3 [i_1])))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (_Bool)0);
    var_20 = ((/* implicit */signed char) (unsigned short)39199);
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_21 = (+(var_4));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (~(arr_8 [(unsigned short)2] [(unsigned char)21]))))));
    }
    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        arr_14 [(unsigned short)11] = ((/* implicit */unsigned long long int) (_Bool)0);
        arr_15 [i_3] = ((/* implicit */unsigned short) arr_10 [i_3]);
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_3]))));
        arr_17 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */unsigned long long int) 1722557091)) : ((+(12243386403841922950ULL)))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        arr_21 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)53266)) ? ((~(((((/* implicit */_Bool) (short)32766)) ? (1152921367167893504ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))))))) : (((unsigned long long int) ((unsigned int) (_Bool)0)))));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                for (int i_7 = 2; i_7 < 17; i_7 += 4) 
                {
                    {
                        var_23 = (_Bool)0;
                        var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7 - 2] [i_7 - 2])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) ? ((~(((var_16) ? (7340032ULL) : (13305062423905550466ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_11 [i_4])) : ((((_Bool)0) ? (((/* implicit */int) arr_25 [i_4])) : (((/* implicit */int) (unsigned short)26344)))))))));
                        arr_32 [i_4] [i_4] [i_4] [i_6] [i_6] = (~((+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_26 [i_4] [i_5] [i_5])))))));
                    }
                } 
            } 
        } 
        arr_33 [i_4] [i_4] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_29 [i_4] [i_4] [i_4]))))));
    }
}
