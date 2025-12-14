/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97278
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
    var_15 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) var_11)) ? (var_14) : (var_12))) - (12316096424974873540ULL)))))) : ((((_Bool)0) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) | (var_6))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_9)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */int) var_11);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_17 = ((((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_7)) ? (arr_4 [i_0] [(_Bool)1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(unsigned short)20]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46447))))) ^ (((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_1])) : (arr_4 [0U] [2LL] [2LL])))) ? (((/* implicit */long long int) max((arr_2 [i_0] [9ULL] [(unsigned short)9]), (((/* implicit */int) arr_1 [i_0] [i_1]))))) : (((((/* implicit */long long int) arr_2 [i_0] [0ULL] [i_1])) ^ (var_13))))));
            var_18 ^= ((/* implicit */long long int) ((max((((var_9) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_3 [4LL] [i_1] [5ULL])))), (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((((/* implicit */int) arr_0 [i_1])) ^ (((/* implicit */int) (unsigned short)32768)))) : (arr_2 [i_0] [i_0] [i_1])))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) 16378133713939614090ULL);
            arr_6 [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_2))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */long long int) ((2068610359769937525ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_2 - 1])), (((unsigned short) arr_1 [i_2] [i_0]))))))));
            arr_9 [i_2 - 1] = ((/* implicit */_Bool) arr_7 [i_2]);
        }
        var_20 ^= ((/* implicit */_Bool) min((((int) (((_Bool)1) ? (arr_8 [16] [16]) : (arr_8 [i_0] [(_Bool)1])))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)-704)) : (((/* implicit */int) (unsigned short)46447))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)56698))))) ^ (((((/* implicit */_Bool) arr_7 [i_3])) ? (13187567573073615602ULL) : (13187567573073615602ULL))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(arr_7 [i_3]))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) max(((short)-17617), (((/* implicit */short) (_Bool)1))))), (((unsigned short) arr_0 [i_3]))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_12 [i_3])))), (((/* implicit */int) arr_12 [i_3]))))) : (((((/* implicit */_Bool) var_5)) ? (((arr_11 [i_3]) | (10871946640568626429ULL))) : (((((/* implicit */_Bool) arr_2 [0U] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) arr_7 [i_3])) : (640079088606288676ULL)))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
    {
        var_23 = ((5201950367121166019LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19075))));
        arr_16 [19U] [i_4] = ((/* implicit */unsigned int) arr_2 [i_4] [i_4] [i_4]);
        var_24 -= ((/* implicit */long long int) arr_1 [i_4] [i_4]);
        var_25 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19075)) ? (arr_4 [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56698)))))) || (((/* implicit */_Bool) (short)32767))))));
    }
    var_26 = ((/* implicit */long long int) var_8);
    var_27 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) (unsigned short)65526))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_14))))), (((/* implicit */unsigned long long int) var_5))));
    var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
}
