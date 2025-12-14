/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98507
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
    var_10 = ((/* implicit */int) max(((+(max((((/* implicit */long long int) var_3)), (var_5))))), (((/* implicit */long long int) (signed char)-111))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_4 [(signed char)10] [(unsigned char)4] = ((/* implicit */unsigned char) var_8);
        arr_5 [i_0] = ((/* implicit */signed char) (unsigned char)131);
        var_11 = ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_12 = ((/* implicit */_Bool) max((arr_6 [i_1]), (((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62614))) < (9654777413970334391ULL))))))));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)62614)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)110))) : (arr_6 [i_1])))))));
        arr_8 [i_1] [(signed char)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (signed char)-124))))) ? (((3541907910U) << (((((/* implicit */int) var_4)) - (98))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))));
        var_14 *= ((/* implicit */short) ((-2114521448) / (((/* implicit */int) var_7))));
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 20; i_3 += 4) 
        {
            for (signed char i_4 = 4; i_4 < 21; i_4 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_11 [i_5] [(unsigned short)0] [i_3 - 1])) ? (((/* implicit */int) (unsigned short)62075)) : (((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))))));
                        var_16 += ((/* implicit */signed char) -2114521430);
                    }
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)-124), (arr_18 [i_3 - 1] [i_4 - 3] [i_4] [i_6])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)62614))))) ? (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) 2406466555U)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70)))))))));
                        var_18 = ((/* implicit */unsigned long long int) arr_17 [17U] [(_Bool)1] [i_4] [i_2]);
                    }
                    var_19 *= ((/* implicit */unsigned int) max((((/* implicit */short) ((unsigned char) ((((/* implicit */int) var_7)) / (((/* implicit */int) (unsigned char)67)))))), (var_9)));
                    arr_20 [i_2] [(unsigned short)17] [i_2] = ((((/* implicit */_Bool) var_0)) && (((((((/* implicit */_Bool) arr_14 [i_2] [(_Bool)1] [i_2] [i_2])) ? (((/* implicit */int) (signed char)-127)) : (-2114521448))) != (var_0))));
                    var_20 += ((/* implicit */short) var_5);
                }
            } 
        } 
        var_21 *= ((/* implicit */unsigned char) min((((((/* implicit */int) var_4)) / (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)209)), ((unsigned short)2922)))))), (((/* implicit */int) (signed char)117))));
        arr_21 [i_2] = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) (unsigned short)13577)) ? (((/* implicit */unsigned int) var_0)) : (var_6))))) >> (((((/* implicit */int) (unsigned short)255)) - (246)))));
    }
    for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        arr_25 [i_7] [i_7] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))));
        arr_26 [i_7] [i_7] = ((/* implicit */unsigned short) arr_12 [i_7]);
    }
}
