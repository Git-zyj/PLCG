/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86218
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
    var_10 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)148)), (-248888890233846941LL)))) ? (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */int) (unsigned short)50037)))) : ((-(((/* implicit */int) (unsigned short)7))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (4073174435809116655LL) : (((/* implicit */long long int) var_1))))) ? (max((((/* implicit */long long int) (unsigned short)3003)), (-2993800348453752148LL))) : (7561413530011698713LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) max((2832856191U), (((/* implicit */unsigned int) var_0)))))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) (~(max((((int) var_6)), (((/* implicit */int) ((((/* implicit */_Bool) 5110865656711324447ULL)) && (((/* implicit */_Bool) (unsigned short)37144)))))))));
                        var_12 = var_2;
                    }
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((-7561413530011698714LL) - (-5683015982257854104LL))))) ? (((/* implicit */int) ((5683015982257854121LL) == (((/* implicit */long long int) 23U))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(unsigned short)15] [i_0] [8U] [i_4] [i_2])))))))));
                        arr_15 [i_0] [i_1] [i_0] = ((/* implicit */short) min(((~(((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 2])))), (((/* implicit */int) ((arr_11 [i_0] [i_1] [i_0] [i_4]) > (((/* implicit */int) arr_6 [(signed char)8] [i_0] [i_4])))))));
                        var_14 = ((/* implicit */long long int) (+(var_3)));
                    }
                }
            } 
        } 
    } 
}
