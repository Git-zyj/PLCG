/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86587
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */short) (unsigned short)7936);
                var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57574)) / (((/* implicit */int) arr_2 [i_0 - 1] [i_1]))))) & (var_3)));
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 + 2]))))) ? (((/* implicit */int) (unsigned short)7915)) : (((/* implicit */int) ((_Bool) arr_1 [i_0 - 1])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) + (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)70))))) : (((/* implicit */int) ((arr_7 [i_2]) > (arr_7 [i_2])))))));
        var_14 = ((/* implicit */unsigned char) ((_Bool) (unsigned short)31121));
        var_15 = ((/* implicit */short) min((((((((/* implicit */_Bool) arr_7 [i_2])) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2]))))) : ((~(arr_7 [i_2]))))), (((/* implicit */int) (unsigned short)7929))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_16 += (+((((_Bool)1) ? (((/* implicit */int) arr_9 [i_4 + 1])) : (((((/* implicit */int) (unsigned short)11)) | (((/* implicit */int) var_10)))))));
            arr_13 [i_3] [i_4] [i_3] = ((/* implicit */short) (-((+(arr_11 [i_4 + 1] [i_4 + 1])))));
            var_17 &= ((/* implicit */long long int) ((min((((/* implicit */int) (unsigned short)34414)), ((~(((/* implicit */int) (unsigned short)4821)))))) >= (((/* implicit */int) (_Bool)1))));
            arr_14 [i_4 + 1] [i_3] = ((/* implicit */unsigned char) (unsigned short)13247);
        }
        var_18 = ((/* implicit */unsigned char) var_8);
    }
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
    {
        var_19 += ((/* implicit */_Bool) arr_11 [i_5] [(short)16]);
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (arr_10 [i_5]))))));
        var_21 = ((/* implicit */short) min(((unsigned short)31121), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_5])))))));
        arr_17 [i_5] [i_5] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned short)7894))))));
        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_12 [i_5])))) ? (arr_10 [i_5]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_11 [i_5] [i_5]), (3244688136682083218ULL)))) ? ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_5])))) : (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_6))))))))));
    }
    var_23 = ((signed char) (_Bool)1);
    var_24 |= ((/* implicit */signed char) ((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)7920)) > (var_4))))))) < ((~(((/* implicit */int) var_8))))));
}
