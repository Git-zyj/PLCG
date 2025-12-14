/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67690
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
    var_14 += ((/* implicit */short) ((((((/* implicit */_Bool) ((int) (unsigned char)224))) ? (min((((/* implicit */unsigned long long int) (unsigned char)224)), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned short)7489)))))))));
        var_16 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) : (4106728578345174158ULL)))) ? (-1788251129) : (((((/* implicit */_Bool) (short)8191)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7531))))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3453958684U)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) (short)25713)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)58015), ((unsigned short)65533)))) ? ((+(arr_2 [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23687))) - (arr_2 [i_0])))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) max(((unsigned short)44772), (((/* implicit */unsigned short) (_Bool)1))))) >= (((/* implicit */int) ((567191834U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))))));
        arr_5 [14] = ((/* implicit */unsigned short) -3059092652327626234LL);
    }
    var_18 = var_5;
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            {
                var_19 = ((/* implicit */int) max((var_19), ((-(((((/* implicit */_Bool) ((unsigned short) 1586651120))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (short)-9833))))) : ((-(((/* implicit */int) (unsigned short)7541))))))))));
                arr_11 [i_1] [i_2] [i_2] = ((/* implicit */int) (+((((_Bool)1) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7965)))))));
                var_20 = ((/* implicit */unsigned int) max(((unsigned char)146), (((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)10)))) == (((/* implicit */int) ((var_12) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))));
                arr_12 [(unsigned short)0] = ((/* implicit */unsigned short) ((unsigned int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (32767U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 7378485637307510466ULL)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) var_13))))))));
            }
        } 
    } 
}
