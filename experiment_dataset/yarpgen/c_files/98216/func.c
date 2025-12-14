/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98216
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) ((unsigned short) 2078642812U));
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (781424572480328724LL)))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [(signed char)6] [i_2])))))) ? (((unsigned long long int) arr_6 [i_0] [(_Bool)1] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115)))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (short)31642))))))) : ((-(1899859013210385510LL)))));
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)43634)))))));
                    var_16 -= ((/* implicit */long long int) (_Bool)1);
                }
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned short) ((signed char) var_12));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) var_11))))))));
}
