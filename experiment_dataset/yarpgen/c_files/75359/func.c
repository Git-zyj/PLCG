/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75359
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
    var_20 = ((/* implicit */long long int) (+(((/* implicit */int) var_13))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) max((((/* implicit */unsigned char) var_10)), (arr_0 [i_0] [i_0]))))), ((~((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (unsigned short)23862));
            arr_7 [i_0] = ((/* implicit */long long int) var_17);
            arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_1)))))))));
            var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_8))))))), (min((((((/* implicit */_Bool) var_16)) ? (var_8) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 2; i_5 < 12; i_5 += 2) 
                    {
                        {
                            var_23 ^= ((/* implicit */_Bool) ((long long int) ((long long int) var_10)));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(0)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (_Bool)1))))))) : ((-(((((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2618343710252919376ULL)))))));
                            arr_19 [i_0] [i_0] = (-(((/* implicit */int) (signed char)40)));
                            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((arr_3 [i_4] [i_3]) ? (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_2]))))))));
                            var_25 = (!(((/* implicit */_Bool) max((2490997801U), (((/* implicit */unsigned int) (_Bool)1))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) 5264816552330326622LL))) ? ((+((+(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 2770241511U)) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_18)))) : (((/* implicit */int) (_Bool)0)))))))));
            }
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                var_27 ^= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)180))));
                var_28 *= ((/* implicit */unsigned int) (!(((((/* implicit */int) (signed char)127)) > (((arr_3 [i_0] [i_6]) ? (((/* implicit */int) (signed char)-91)) : (2147483647)))))));
            }
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        {
                            arr_33 [i_9] [i_0] [i_7] [i_2] [i_0] [5] = ((/* implicit */unsigned char) -14);
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((unsigned long long int) var_7)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((0), (((/* implicit */int) arr_14 [i_9] [i_0] [i_0] [5U] [i_0]))))))))) : (((((/* implicit */_Bool) ((short) 0))) ? (((((/* implicit */_Bool) 0)) ? (14350903063560893280ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)125))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [12] [i_0 - 1])))))));
                            arr_34 [i_9] [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */short) (+((+(arr_24 [i_0 - 1] [i_0 - 1])))));
                            var_30 += ((/* implicit */_Bool) (((_Bool)1) ? (18391309339121796005ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    {
                        arr_41 [i_0] [i_10] [i_0] [i_0] [i_0] = ((/* implicit */short) ((signed char) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (6964716056122305641ULL))));
                        var_31 = ((/* implicit */int) max((var_31), (var_8)));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((int) (-(3508445192U)))))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) (signed char)-36)))) ? (((int) var_9)) : (((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)0)), (var_7)))) || (((/* implicit */_Bool) ((signed char) 4712572749697447853LL)))))) : (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)6320)), (302665662)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)238))))) : (((/* implicit */int) (unsigned char)57))))));
                    }
                } 
            } 
            var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5324465736119330149ULL)) ? (((/* implicit */int) (unsigned char)142)) : (121425515)));
            var_35 += ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)47))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) 1893388321))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)58818))))) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) (unsigned short)6327))))));
        }
        var_36 = ((/* implicit */short) max((min((((((/* implicit */_Bool) 2065099772681542785ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1)))), (((int) var_2)))), ((-(((/* implicit */int) (_Bool)1))))));
        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)58824))))) || ((!(((/* implicit */_Bool) (unsigned short)17541))))))), (var_13))))));
    }
    /* vectorizable */
    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned int) max((var_38), ((-(0U)))));
        arr_44 [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) (short)-19724))));
        arr_45 [i_12 - 1] [i_12 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))));
    }
    var_40 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 9223372036854775805LL)), (var_14)));
}
