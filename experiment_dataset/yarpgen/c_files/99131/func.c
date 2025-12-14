/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99131
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
    for (short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) ((unsigned short) ((long long int) ((unsigned char) arr_1 [i_1]))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned char)4])) : (((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) arr_10 [i_4] [i_3] [(_Bool)1] [i_1] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((unsigned long long int) arr_10 [(_Bool)1] [(_Bool)1] [i_3] [(_Bool)1] [i_2 - 1]))))) : (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_6 [i_1] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) var_12))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_6)) : (arr_1 [i_1]))))));
                                var_15 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))) : (var_0)))) ? (((unsigned long long int) var_7)) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0 + 3]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (int i_6 = 1; i_6 < 11; i_6 += 2) 
                    {
                        {
                            arr_19 [i_0 + 2] [i_5] [i_0 + 2] [i_0 + 2] = ((/* implicit */signed char) ((unsigned char) ((long long int) ((signed char) arr_18 [i_0 + 4] [i_0] [0U] [i_0]))));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)142)) : (((/* implicit */int) arr_11 [i_6 - 1] [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (0) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65529))) : (var_1))) : (((/* implicit */unsigned long long int) ((int) (unsigned char)255))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_4 [10]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))) : (((long long int) 15005779505081103576ULL)))))));
                            arr_20 [i_5] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3755682951664527127ULL)) ? (arr_13 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) 1494167093485678708LL)) ? (14015271564181433696ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [(unsigned short)1] [i_6 + 1])) ? (3624644852U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)25)))))))));
                            arr_21 [i_0] [i_1] [i_5] [i_6 - 1] = ((unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) -1246732721))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [5U] [i_5])))) : (((/* implicit */int) ((unsigned char) 14015271564181433710ULL)))));
                            /* LoopSeq 3 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                arr_25 [i_6] [i_6] [i_1] [(signed char)8] [i_1] [i_1] [i_0] |= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((arr_10 [4ULL] [i_7] [4ULL] [(unsigned char)8] [i_7]) ? (6144ULL) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) : (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                                var_17 -= ((/* implicit */int) ((unsigned long long int) ((unsigned int) (unsigned short)30)));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7] [i_0])) ? (64786999) : (((/* implicit */int) arr_8 [i_0]))))) ? (((/* implicit */int) ((unsigned char) (short)-28845))) : (((/* implicit */int) ((unsigned short) 14015271564181433674ULL)))))) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)(-127 - 1)))) ? (((((/* implicit */_Bool) -4256862992714600291LL)) ? (((/* implicit */int) (short)-7989)) : (((/* implicit */int) (signed char)87)))) : (((/* implicit */int) ((short) (unsigned short)15241))))))));
                            }
                            for (int i_8 = 4; i_8 < 10; i_8 += 1) /* same iter space */
                            {
                                arr_29 [i_0] [i_1] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_8] [(short)6] [i_0])) ? (((/* implicit */int) (unsigned short)6)) : (((/* implicit */int) (short)255))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [(unsigned short)8]))) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_8] [11])) : (((/* implicit */int) (unsigned short)65523))))))));
                                arr_30 [i_5] [i_6] [i_5] [i_5] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) -3703325269585647317LL))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_24 [i_0] [8LL] [i_0] [i_0] [8LL] [i_0] [7LL])) : (((/* implicit */int) (signed char)105)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-24800)) : (((/* implicit */int) (unsigned short)0))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6] [i_1] [i_0]))) : (arr_15 [i_5] [i_1])))) ? (((int) (unsigned short)54094)) : (((/* implicit */int) ((unsigned char) var_2)))))) : (((((/* implicit */_Bool) ((var_12) ? (4256862992714600277LL) : (var_5)))) ? (((((/* implicit */_Bool) -9031681688137241083LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 3] [i_0 + 3] [i_0 + 3]))) : (4256862992714600277LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4)))))))));
                                var_19 = ((/* implicit */signed char) ((unsigned char) ((unsigned short) ((arr_10 [i_0] [i_0] [i_5] [i_0] [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2063873415231610914LL)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) ((signed char) (_Bool)1)))))) ? (((int) ((int) (unsigned short)20297))) : (((/* implicit */int) ((unsigned char) ((unsigned long long int) arr_15 [i_5] [i_5]))))));
                            }
                            for (int i_9 = 4; i_9 < 10; i_9 += 1) /* same iter space */
                            {
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((short) ((long long int) ((unsigned long long int) arr_31 [i_0] [i_1] [i_1] [i_6] [i_9])))))));
                                arr_34 [i_0] [i_0] [i_0] [i_5] [i_9 + 1] = ((/* implicit */unsigned long long int) ((short) ((unsigned int) (_Bool)1)));
                                arr_35 [i_0 - 1] [i_5] [i_0 - 1] [(unsigned char)3] [i_9 + 1] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 5593280588065631595LL)) : (var_9)))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_27 [i_0 - 1]) : (((/* implicit */int) (short)22849)))) : (((/* implicit */int) ((unsigned short) -8141812975112848271LL))))));
                                arr_36 [i_0] [i_0] [i_5] [i_6] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1372090173)) ? (((/* implicit */int) (short)-22849)) : (((/* implicit */int) (unsigned char)47))));
                                arr_37 [(_Bool)1] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) (_Bool)1)))) ? (((unsigned long long int) ((((/* implicit */_Bool) 4120966155579300196ULL)) ? (13378088238765781118ULL) : (407915663024748837ULL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9] [i_5] [i_5] [i_5] [i_0]))) : (var_0)))) ? (((int) arr_14 [i_1] [i_1])) : (((/* implicit */int) ((_Bool) (unsigned short)19707))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) (unsigned short)45853)) : (((/* implicit */int) (signed char)105)))))) ? (((/* implicit */int) ((unsigned char) ((int) var_1)))) : (((/* implicit */int) ((short) ((unsigned short) 2080374784U)))));
    var_23 = ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4176)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_0)))) ? (((int) var_10)) : (((/* implicit */int) ((unsigned short) var_4)))));
}
